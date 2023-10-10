#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Search for value in sorted array using Jump search
 * @array: Pointer to first element of array to search in
 * @size: Number of elements in array
 * @value: The value to search for
 *
 * Return: The index where 'value' is located, or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t left = 0;
	size_t right = 0;
	size_t i;

	if (array == NULL)
		return (-1);

	while (right < size && array[right] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", right, array[right]);
		left = right;
		right += step;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", left, right);

	for (i = left; i <= right && i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
