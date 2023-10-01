#include "main.h"



int help(char *s, int start, int end)
{
	if (start == end)
		return (1);
	if (start > end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (help(s, start + 1, end -1));
}


int is_palindrome(char *s)
{
	int n = strlen(s);

	if (n == 0)
		return (1);
	else
		return (help(s, 0, n - 1));
}
