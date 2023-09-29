#include "main.h"

/**
 *is_prime_number - function check number is prime
 *@m: input two
 *@n: input number
 *Return: 1 is prime 0 is not
*/

int prime_help(int n, int m);
int is_prime_number(int n)
{
	return (prime_help(n, 2));
}

/**
 *prime_help - function check help
 *@n: input number
 *@m: help check
 *Return: 0 is no prime 1 is prime
 */

int prime_help(int n, int m)
{
	if (m >= n && n > 1)
		return (1);
	else if (n % m == 0 || n <= 1)
		return (0);
	else
		return (prime_help(n, m + 1));
}
