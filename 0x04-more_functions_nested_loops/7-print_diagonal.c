#include "main.h"

/**
 *print_diagonal - function print lines
 *@n: input one
*/

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (i == j)
				{
					_putchar('\\');
				}
				else if (j < i)
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
	else if (n == 0 || n < 0)
	{
		_putchar('\n');
	}
}
