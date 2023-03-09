#include "main.h"

/**
 * factorial- return factorial of n
 * @n: the number to computer in factorial
 *
 * Return: n or -1 when factorial is negative
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

