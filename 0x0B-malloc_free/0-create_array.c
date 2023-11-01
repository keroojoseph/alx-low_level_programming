#include "main.h"

/**
 **create_array - function create array of character
 *@size: size of array
 *@c: the character
 *Return: NULL if size == 0
*/

char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (size == 0 || n == 0)
	{
		return (0);
	}
	while (size--)
	{
		n[size] = c;
	}
	return (n);

}
