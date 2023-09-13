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
		_putchar(48);
		for (j = 1; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');
			sum = i * j;
			if (sum > 9)
			{
				_putchar(sum / 10 + 48);
				_putchar(sum % 10 + 48);
			}
			else
			{
				_putchar(' ');
				_putchar(sum + 48);
			}
		}
		_putchar('\n');
	}
}
