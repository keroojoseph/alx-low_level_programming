#include "main.h"

/**
 * str_concat - function concatenation string
 * @s1: argument one
 * @s2: argument two
 * Return: str
**/

char *str_concat(char *s1, char *s2)
{
	int len_s1 = strlen(s1);
	int len_s2 = strlen(s2);
	int m = len_s1 + len_s2 + 1;
	char *str = malloc(m * sizeof(int) - 36);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (str != NULL)
	{
		strcpy(str, s1);
		strcat(str, s2);
	}
	return (str);
}
