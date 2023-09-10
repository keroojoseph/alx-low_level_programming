#include <stdio.h>

/**
 *main - Entry point
 *Description: print hexi number
 *Return: Always 0 (success)
*/

int main(void)
{
	int num;
	char ch;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
