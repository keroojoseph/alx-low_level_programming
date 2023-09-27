#include "main.h"

/**
 *_strspn - function search character
 *@s: input one
 *@accept: input two
 *Return: i
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	while (s[i] != '\0' && strchr(accept, s[i]) != NULL)
	{
		i++;
	}
	return (i);
}
