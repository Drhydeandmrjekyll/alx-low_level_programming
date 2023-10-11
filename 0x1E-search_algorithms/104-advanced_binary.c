#include <stdio.h>
#include "search_algos.h"

int advanced_binary_recursive(int *array,
				size_t left,
				size_t right,
				int value);
/**
 * advanced_binary - Search for value in sorted
 *                   array using advanced binary search.
 * @array: Pointer to first element of array to search in.
 * @size: Number of elements in array.
 * @value: Value to search for.
 *
 * Return: Index where 'value' is located, or -1 if not found.
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t left = 0;
	 size_t right = size - 1;

	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, left, right, value));
}
/**
 * advanced_binary_recursive - Recursive function to
 *                             perform advanced binary search.
 * @array: Pointer to first element of array to search in.
 * @left: Left index of current subarray.
 * @right: Right index of current subarray.
 * @value: Value to search for.
 *
 * Return: Index where 'value' is located, or -1 if not found.
 */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (left > right)
		return (-1);

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i < right)
			printf(", ");
	}
	printf("\n");

	i = left + (right - left) / 2;

	if (array[i] == value)
	{
		if (i == 0 || array[i - 1] < value)
			return (i);
	else
		return (advanced_binary_recursive(array, left, i, value));
	}
	else if (array[i] < value)
	{
		return (advanced_binary_recursive(array, i + 1, right, value));
	}
	else
	{
		return (advanced_binary_recursive(array, left, i, value));
	}
}
