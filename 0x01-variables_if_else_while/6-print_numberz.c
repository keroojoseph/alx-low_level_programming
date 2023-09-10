#include <stdio.h>

/**
 *main - Entry point
 *Description: print digit base 10 without char
 *Return: 0 is seccess
*/

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(48 + i);
	}
	putchar('\n');
	return (0);
}
