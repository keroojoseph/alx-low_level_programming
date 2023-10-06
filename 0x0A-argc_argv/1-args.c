#include <stdio.h>

/**
 * main - entry point
 * @argc: number of argument
 * @argv: array of string
 * Return: 0 is seccess
*/

int main(int argc, char *argv[])
{
	int i;

	printf("%d\n", argc - 1);
	for (i = 1; i < argc - 1; i++)
	{
		printf("%s", argv[i]);
	}
	return (0);
}
