#include "main.h"

/**
 **_strncat - fuction concat string
 *@dest: input one
 *@src: input two
 *@n: input three
 *Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
