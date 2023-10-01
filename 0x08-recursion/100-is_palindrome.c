#include "main.h"

/**
 *help - function help you find palindrome
 *@s: is the string
 *@start: index 0
 *@end: length -1
 *Return: recursion
*/

int help(char *s, int start, int end)
{
	if (start == end)
		return (1);
	if (start > end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (help(s, start + 1, end - 1));
}
/**
 *is_palindrome - function check string is palindrome or no
 *@s: the string
 *Return: 1 if string is palindrome
*/

int is_palindrome(char *s)
{
	int n = strlen(s);

	if (n == 0)
		return (1);
	else
		return (help(s, 0, n - 1));
}
