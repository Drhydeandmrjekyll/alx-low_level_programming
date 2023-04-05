#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node in a linked list
 *                           at a given position
 *
 * @head: pointer to the first node in list
 * @n: data to insert in new node
 * @idx: index where the new node is added
 *
 * Return: pointer to new node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{


	unsigned int i;
	listint_t *new;
	listint_t *tmp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; tmp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new->next = tmp->next;
			tmp->next = new;
			return (new);
		}

		else
			tmp = tmp->next;
	}

	return (NULL);
}


