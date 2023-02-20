#include <stdio.h>
#include <stdlib.h>
/**
 * main- entry point
 * description- use putchar to print lowercase alphabets
 *
 * return:Always 0 (success)
 */

int main(void)
{
	char alf;
		for (alf = 'a'; alf <= 'z'; ++alf)
			putchar(alf);

	putchar('\n');
	return (0);
}

