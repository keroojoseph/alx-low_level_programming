#include "main.h"

/**
 **_memset - function return pointer
 *@s: pointer input
 *@b: charcater replace other char
 *@n: number of byte
 *Return: pointer
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
