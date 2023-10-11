#include "search_algos.h"
#include <math.h>

/**
 * jump_list - Search for value in sorted list of integers using Jump search
 * @list: Pointer to head of list to search in
 * @size: Number of nodes in list
 * @value: Value to search for
 *
 * Return: Pointer to first node where value is located, or NULL if not found
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, step_size;
	listint_t *node, *jump;

	/* Check if list is NULL or empty */
	if (list == NULL || size == 0)
		return (NULL);

	step = 0;

	step_size = sqrt(size);

	for (node = jump = list; jump->index + 1 < size && jump->n < value;)
	{
		/* Store previous jump node */
		node = jump;

		for (step += step_size; jump->index < step; jump = jump->next)
		{
			if (jump->index + 1 == size)
				break;
		}

		printf("Value checked at index [%ld] = [%d]\n", jump->index, jump->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
		node->index, jump->index);

	for (; node->index < jump->index && node->n < value; node = node->next)
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	return (node->n == value ? node : NULL);
}
