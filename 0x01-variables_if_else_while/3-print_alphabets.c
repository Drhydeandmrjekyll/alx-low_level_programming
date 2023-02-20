#include <stdio.h>
#include <stdlib.h>

/**
 * main- Entry point
 *
 * description- print uppercase and lowercase
 *
 * return: Always 0 (success)
 *
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
