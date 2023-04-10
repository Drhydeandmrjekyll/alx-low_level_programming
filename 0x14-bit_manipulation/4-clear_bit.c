#include "main.h"

/**
 * clear_bit - sets the value of given bit to 0
 * @index: Index of bit to clear
 * @n: Pointer to number to change
 *
 * Return: 1 success, -1 failure,
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}

