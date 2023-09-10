#include <stdio.h>

/**
 *main - Entry point
 *Description: print alphabet captal and small
 *Return: 0 is seccess
*/

int main(void)
{
	char ch, CH;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (CH = 'A'; CH <= 'Z'; CH++)
	{
		putchar(CH);
	}
	putchar('\n');
	return (0);
}
