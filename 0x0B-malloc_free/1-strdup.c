#include "main.h"

/**
 * _strdup - function duplicted string
 * @str: pointer to string
 * Return: newstr
**/

char *_strdup(char *str)
{
	int len = strlen(str) + 1;
	char *newstr = malloc(len);

	if (str == NULL)
		return (NULL);
	if (newstr != NULL)
		strcpy(newstr, str);
	return (newstr);
}
