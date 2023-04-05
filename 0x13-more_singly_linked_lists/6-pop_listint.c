#include "lists/h"

/**
 * pop_listint - delete the head node of linked list
 * @head: pointer to first element in linked list
 *
 * Return: Data insided the element prior deleted
 *         or 0 if list's empty
 *
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int num;

	if (!head || !*head)
	       return (0);
	num = (*head)->next;
	tmp= (*head)->next;
	free(*head);
	*head= tmp;

	return (num);
}

