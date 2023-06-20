#include "lists.h"

/**
* delete_dnodeint_at_index - Deletes node at a given
* index of a dlistint_t linked list.
* @head: A double pointer to head of dlistint_t linked list.
* @index: Index of the node to be deleted, starting from 0.
*
* Return: 1 on success,
*         -1 on failure.
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current = *head;
unsigned int i;

if (head == NULL || *head == NULL)
return (-1);

/* If deleting node at index 0 (head) */
if (index == 0)
{
*head = current->next; /* Change head */
if (*head != NULL)
(*head)->prev = NULL; /* Make sure previous NULL for new head */
free(current); /* Free old head */
return (1);
}

/* Traverse till node at given index */
for (i = 0; i < index; i++)
{
if (current == NULL)
return (-1);
current = current->next;
}

/* Change next if node to be deleted is NOT last node */
if (current->next != NULL)
current->next->prev = current->prev;

/* Change prev only if node be deleted is NOT first node */
if (current->prev != NULL)
current->prev->next = current->next;

/* Finally free memory occupied by current node */
free(current);

return (1);
}
