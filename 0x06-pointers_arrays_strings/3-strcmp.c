#include "main.h"

/**
 *_strcmp - function compare two string
 *@s1: input one
 *@s2: input two
 *Return: 0 is equal, 15 is s1 > s2, -15 is s1 < s2
*/

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (0);
}
