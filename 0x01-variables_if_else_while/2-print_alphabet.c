#include <stdio.h>

/**
 *main - Entry point
 *Description: print ailphabate small and newline
 *Return: 0 is seccess
*/

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
