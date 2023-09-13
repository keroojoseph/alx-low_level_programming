#include "main.h"

/**
 *isalpha - function check alphabet
 *@c: int parameter
 *Return: 1 is c alphabet 0 is other
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}
