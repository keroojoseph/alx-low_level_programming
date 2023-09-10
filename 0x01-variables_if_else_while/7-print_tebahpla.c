#include <stdio.h>

/**
 *main - Entry point
 *Description: print alphabet reverse
 *Return: 0 is seccess
*/

int main(void)
{
	char ch;

	for (ch = 122; ch >= 97; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
