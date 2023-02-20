#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * description: print all alphabets in lowercase except q and e
 *
 * return: Always 0 (success)
 */

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z' ; a++)
	{
		if (a == 'q' || a == 'e')
		{
			continue;
		}
		putchar(a);
	}
	putchar('\n');
	return (0);
}
