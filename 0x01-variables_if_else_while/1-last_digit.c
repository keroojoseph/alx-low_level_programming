#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Entry point
 *
 *Description: print random number
 *Return: 0 is seccess
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5 && n % 10 > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, n % 10);
	}
	else if (n == 0 && n % 10 == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, n);
	}
	else if (n  < 6 && n != 0 && n % 10 < 6 && n % 10 != 0)
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, n % 10);
	}
	return (0);
}
