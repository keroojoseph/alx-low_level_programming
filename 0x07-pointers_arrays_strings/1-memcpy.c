#include "main.h"

/**
 **_memcpy - function copy number of byte to pointer
 *@dest: input pointer or arry
 *@src: character want to copy
 *@n: number of byte
 *Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	int j;

	for (i = 0; i < n; i++)
	{
		j = src[i];
		dest[i] = j;
	}
	return (dest);
}
