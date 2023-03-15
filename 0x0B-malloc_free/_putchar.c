#include <stdio.h>
#include <unistd.h>

/**
 * _putchar - writes character c in  stdout
 *
 * @c: The character to print
 *
 * Return: on success 1.
 *
 *  on error, -1 is returned, and  errno is set appropriely
 */

int _putchar(char c)
{
	
	return (write(1,&c,1));
}

