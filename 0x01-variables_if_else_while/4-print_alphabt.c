#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Description: print all alphabets in lowercase except q and e
 *
 * Return: Always 0 (success)
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
