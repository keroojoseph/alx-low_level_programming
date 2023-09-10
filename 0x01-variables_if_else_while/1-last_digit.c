#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Entry point
 *Description: print random number and last digit
 *Return: always 0 is seccess
*/

int main(void)
{
	int n;
	int num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	num = n % 10;

	if (num > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, num);
	}
	else if (num == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, num);
	}
	else if (num < 6 && n % 10 != 0)
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, num);
	}
	return (0);
}
