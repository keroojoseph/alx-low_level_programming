#include "main.h"

/**
 *times_table - function print 9 times
 *Description: function print 9 times
*/

void times_table(void)
{
	char i, j, sum;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			sum = i * j;
			if (sum > 9)
			{
				_putchar(sum / 10 + 48);
				_putchar(sum % 10 + 48);
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(sum + 48);
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
