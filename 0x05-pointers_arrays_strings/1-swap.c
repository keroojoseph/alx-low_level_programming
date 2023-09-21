#include "main.h"

/**
 *swap_int - function swap
 *@a: input parameter
 *@b: second input parameter
*/

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
