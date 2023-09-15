#include "main.h"

/**
 *more_numbers - function print intgere for 0 to 14
*/

void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
				_putchar(j / 10 + 48);
				_putchar(j % 10 + 48);
			}
			else
			{
				_putchar('0' + j);
			}
		}
		_putchar('\n');
	}
}
