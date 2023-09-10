#include <stdio.h>

/**
 *main - Entry point
 *Description: print number , and space
 *Return: Always 0 (success)
*/

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
