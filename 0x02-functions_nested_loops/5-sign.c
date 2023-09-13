#include "main.h"

/**
 *print_sign - function check number
 *Description: function check number is + , - and 0
 *@n: int parameter
 *Return: 1 is n > 0, return 0 is n == 0, return -1 is n < 0
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}

