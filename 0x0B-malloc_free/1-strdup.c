#include "main.h"

/**
 * _strdup - function duplicted string
 * @str: pointer to string
 * Return: newstr
**/

char *_strdup(char *str)
{
	char *newstr;
	int len;

	len = strlen(str);
	if (str == NULL)
		return (NULL);
	newstr = malloc(len + 1);
	if (newstr != NULL)
		strcpy(newstr, str);
	return (newstr);
}
