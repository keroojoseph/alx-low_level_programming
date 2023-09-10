#include <stdio.h>

/**
 *main - Entry point
 *Description: print alphabet without e and q
 *Return: 0 is seccess
*/

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
