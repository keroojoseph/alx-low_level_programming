#include <stdio.h>

/**
 * main - entry point
 * @argc: number of argument
 * @argv: array of string
 * Return: 0 is seccess
*/

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
