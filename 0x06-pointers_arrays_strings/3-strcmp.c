#include "main.h"

/**
 *_strcmp - function compare two string
 *@s1: input one
 *@s2: input two
 *Return: 0 is equal, 15 is s1 > s2, -15 is s1 < s2
*/

int _strcmp(char *s1, char *s2)
{
	if (strcmp(s1, s2) == 0)
	{
		return (0);
	}
	else if (strcmp(s1, s2) < 0)
		return (-15);
	else
		return (15);
}
