#include "main.h"

/**
 *_isupper - function check alphabet is upper or is not
 *Description: function check upper case
 *@c: int parameter
 *Return: 1 is c is upper other return 0
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
