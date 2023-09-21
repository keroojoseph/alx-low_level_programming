#include "main.h"

/**
 *string_toupper - This function will replace all lowercase letters in
 *the string pointed by str to uppercase
 *@str: The string that will be checked for lowercase letters
 *
 *Return: The resulting string str, where all the letters are uppercase
*/

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = (int)str[i] - 32;
	}
	return (str);
}
