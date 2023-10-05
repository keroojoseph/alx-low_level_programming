#include "main.h"

/**
 **_strchr - function searche for charcter
 *@s: array of character
 *@c: character for searche
 *Return: s+i is c == s[i] or return NULL
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (c == s[i])
		{
			return (s + i);
		}
	}
	return ('\0');
}
