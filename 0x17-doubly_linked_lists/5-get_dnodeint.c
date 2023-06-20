#include "lists.h"

/**
* get_dnodeint_at_index - Returns the node at a
* given position in a doubly linked list.
* @head: Pointer to first node in the list.
* @index: The position of node to return.
*
* Return: The node at position index, or NULL if the node does not exist.
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int counter = 0;

/* Traverse the list to find node at index */
while (head != NULL)
{
/* If current node is the one we are looking for, return it */
if (counter == index)
{
return (head);
}

/* Move the next node and increment the counter */
head = head->next;
counter++;
}

/* If we reach this point, the node at index doesn't exist */
return (NULL);
}
