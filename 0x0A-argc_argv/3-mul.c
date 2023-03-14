#include <stdio.h>
#include <stdlib.h>

/**
 * main- Program that multiples two arguements passed into it
 *
 * @argc: The number of arguement count
 *
 * @argv: The number of string arguement in array pointer
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
int m;

if (argc != 3)
{
printf("Error\n");
return (1);
}
else
{
m = (atoi(argv[1]) * atoi(argv[2]));
printf("%d\n", m);
}
return (0);
}

