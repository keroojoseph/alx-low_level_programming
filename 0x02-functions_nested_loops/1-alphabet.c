#include "main.h"

/**
 *print_alphabet - function print alphabet
 *
 *Return: 0 is seccess
*/

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
