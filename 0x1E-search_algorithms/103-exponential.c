#include <stdio.h>
#include "search_algos.h"
/**
  * _binary_search - Searches for value in sorted array
  *                  of integers using binary search.
  * @array: Pointer to first element of array to search.
  * @left: Starting index of [sub]array to search.
  * @right: Ending index of [sub]array to search.
  * @value: Value to search for.
  *
  * Return: If value not present or array is NULL, -1.
  *         Otherwise, index where value is located.
  */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t i;

	/* Check if array is NULL */
	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		/* Calculate middle index */
		i = left + (right - left) / 2;

		/* If middle element is value */
		if (array[i] == value)
			/* Return index */
			return (i);
		/* If middle element is greater than value */
		if (array[i] > value)
			right = i - 1;
		else
			/* Otherwise, update the left boundary */
			left = i + 1;
	}

	return (-1);
}

/**
  * exponential_search - Searches for value in sorted array
  *                      of integers using exponential search.
  * @array: Pointer to first element of array to search.
  * @size: Number of elements in array.
  * @value: Value to search for.
  *
  * Return: If value is not present or array is NULL, -1.
  *         Otherwise, index where value is located.
  */

int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, right;

	/* Check if array is NULL */
	if (array == NULL)
		return (-1);
	/* Perform exponential search if first element is not target value */
	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}
	/* Determine range where value is expected to be found */
	right = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, right);
	/* Perform binary search within identified range */
	return (_binary_search(array, i / 2, right, value));
}
