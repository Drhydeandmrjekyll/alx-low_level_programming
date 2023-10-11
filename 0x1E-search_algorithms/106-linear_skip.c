#include "search_algos.h"
#include <math.h>

/**
 * linear_skip - Searches for a value in a sorted skip list of integers.
 * @list: Pointer to the head of the skip list to search in.
 * @value: The value to search for.
 *
 * Return: Pointer to the first node where value is located, or NULL if not found.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *current, *express;

	if (list == NULL)
		return (NULL);

	express = list;
	while (express->express)
	{
		current = express;
		express = express->express;
		printf("Value checked at index [%lu] = [%d]\n", express->index, express->n);
		if (express->n >= value)
		{
			printf("Value found between indexes [%lu] and [%lu]\n",
				current->index, express->index);
			while (current->next)
			{
				printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
				if (current->n == value)
					return (current);
				if (current->n > value)
					return (NULL);
                	current = current->next;
			}
		}
	}

	while (current->next)
	{
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
		if (current->n == value)
			return (current);
		if (current->n > value)
			return (NULL);
		current = current->next;
	}

	return (NULL);
}
