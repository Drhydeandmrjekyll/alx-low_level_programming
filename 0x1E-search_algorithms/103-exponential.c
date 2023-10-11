#include <stdio.h>
#include "search_algos.h"

/**
 * exponential_search - Search for value in sorted array
 *                      using Exponential search.
 * @array: Pointer to first element of array to search in.
 * @size: Number of elements in array.
 * @value: Value to search for.
 *
 * Return: Index where 'value' is located, or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;
	size_t low, high;

	if (array == NULL || size == 0)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	low = bound / 2;
	high = (bound < size) ? bound : size - 1;

	printf("Value found between indexes [%lu] and [%lu]\n", low, high);
	printf("Searching in array: ");

	while (low <= high)
	{
		printf("%d", array[low]);
		if (low < high)
			printf(", ");

		if (array[low] == value)
			return (low);

		low++;
	}

	return (-1);
}
