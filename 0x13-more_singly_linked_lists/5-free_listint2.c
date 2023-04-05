#include "lists.h"

/**
 * free_iistint2 - frees listint_t list.
 * @head: A pointer to the address of the head
 *       of listint_t list.
 *
 * Description: To set the head to NULL.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;

	}

	head = NULL;
}

