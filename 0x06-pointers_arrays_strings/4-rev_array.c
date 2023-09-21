#include "main.h"

/**
 *reverse_array - function reverse array
 *@a: input one
 *@n: input two
*/

void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;
	int tmp;

	while (start < end)
	{
		tmp = a[start];
		a[start] = a[end];
		a[end] = tmp;
		start++;
		end--;
	}
}
