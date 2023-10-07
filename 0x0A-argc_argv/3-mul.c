#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of argument
 * @argv: array of string
 * Return: 0 is success
*/

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	int a, b;

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	if (argc == 3)
	{
		int result = a * b;
		printf("%d\n", result);
	}
	return (0);
}
