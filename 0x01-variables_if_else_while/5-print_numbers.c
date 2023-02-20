#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints integers from 0 to 9 using a while loop
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int a = 0;

	while (a < 10)
	{
		printf("%d", a);
		a++;
	}

	putchar('\n');

	return (0);
}

