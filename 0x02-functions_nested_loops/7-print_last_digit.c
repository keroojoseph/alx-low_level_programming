#include "main.h"

/**
 *print_last_digit - function print last digit
 *Description: function print last digit for n
 *@n: int parameter
 *Return: n last digit
*/

int print_last_digit(int n)
{
	if (n < 0)
	{
		n = -1 * (n % 10);
		_putchar(n + 48);
	}
	else
	{
		n = n % 10;
		_putchar(n + 48);
	}
	return (n);
}
