#include "main.h"

/**
 **_strncpy - function copy string and concat
 *@dest: input one
 *@src: input two
 *@n: input three
*/

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
