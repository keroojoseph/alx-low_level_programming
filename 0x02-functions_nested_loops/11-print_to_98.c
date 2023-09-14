#include <stdio.h>
#include "main.h"

/**
 *print_to_98 - function
 *Description: print fot n to 98
*/

void print_to_98(int n)
{
	if (n < 98)
	{
		for(; n < 98; n++)
		{
			if(n != 98)
			{
				printf("%d, ", n);
			}
			else
			{
				printf("%d", n);
			}
		}
		_putchar('\n');
	}
	else if (n > 98)
	{
		for(; n > 98; n--)
		{
			if(n != 98)
			{
				printf("%d, ", n);
			}
			else
			{
				printf("%d", n);
			}
		}
		_putchar('\n');
	}
	else if (n == 98)
	{
		printf("%d",n);
		_putchar('\n');
	}
}
