#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Description: print alphabet in lowercase then in uppercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char laf;

	for (laf = 'a'; laf <= 'z'; ++laf)
		putchar(laf);
	for (laf = 'A'; laf <= 'Z'; ++laf)
		putchar(laf);
	putchar ('\n');

return (0);
}
