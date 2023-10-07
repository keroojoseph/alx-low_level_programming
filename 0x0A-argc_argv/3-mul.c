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
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
