#include "main.h"

/**
 *help - function help checker sqrt
 *@n: base case
 *@base: base checker
 *Return: natural square root
*/

int help(int n, int base)
{
	if (n * n == base)
		return (n);
	if (n * n > base)
		return (-1);
	return (help(n + 1, base));
}

/**
 *_sqrt_recursion - function return sqare root of n
 *@n: input number
 *Return: square root
*/

int _sqrt_recursion(int n)
{
	return (help(1, n));
}
