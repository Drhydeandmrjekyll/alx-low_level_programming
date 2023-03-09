#include "main.h"

/**
* actual_sqrt_recursion - returns the natural square root of a number.
*
* @n: the number to compute the square root of.
* @i: the current guess for the square root of n.
*
* Return: the square root of n.
*         -1 if n does not have a natural square root.
*/
int actual_sqrt_recursion(int n, int i)
{
if (i * i > n)
return (-1);

if (i * i == n)
return (i);

return (actual_sqrt_recursion(n, i + 1));
}

/**
* _sqrt_recursion - returns the natural square root of a number.
*
* @n: the number to compute the square root of.
*
* Return: the square root of n.
*         -1 if n does not have a natural square root.
*/
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);

return (actual_sqrt_recursion(n, 0));
}

