#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - Add new node at the beginning of 
 *               listint_tt list.
 *
 * @n: integer for new node to contain
 * @head: A pointer to the address of the head 
 *       of the listint_t list.
 *
 * Return: If function fails return -  NULL
 *         Else - the address of the new element.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n= n;
	new->next = *head;

	*head = new;

	return (new);

}

