#include "main.h"

/**
 *_islower - function return (1) is c lower alphabet other return (0)
 *Description: reurn 1 is c lower alphabet other return 0
 *@c: int parameter
 *Return: 1 is c lower other return 0
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
