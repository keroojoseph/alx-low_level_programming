#include "main.h"

/**
 *_pow_recursion - function that returns the value of x raised to the pow of y
 *@x: input one the base
 *@y: input two the power
 *Return: x ** y
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
