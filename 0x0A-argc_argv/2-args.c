#include <stdio.h>

/**
 *main- entry point
 *@argc: number of argument
 *@argv: array of string
 *Return: 0 is success
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
