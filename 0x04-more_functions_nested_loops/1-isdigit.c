#include "main.h"

/**
 *_isdigit - function check digit
 *Description: function check value is digit or not
 *@c: is int parameter
 *Return: 1 is c digit other return 0
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}
