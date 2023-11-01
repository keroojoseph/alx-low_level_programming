#include "main.h"

/**
 * _strdup - function duplicted string
 * @str: pointer to string
 * Return: newstr
**/

char *_strdup(char *str)
{
	int len = strlen(str);
	char *newstr = malloc(len + 1);

	if (str == NULL)
		return (NULL);
	if (newstr != NULL)
		strcpy(newstr, str);
	return (newstr);
}
