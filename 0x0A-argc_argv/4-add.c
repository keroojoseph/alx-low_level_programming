#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *main - entry point
 *@argc: number of argument command line
 *@argv: input argument
 *Return: 1 is error, 0 is argc == 1
*/

int main(int argc, char *argv[])
{
	int sum = 0, num = 0, i;
	int j = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		char *str = argv[i];

		while (str[j] != '\0')
		{
			if (!isdigit(str[j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		num = atoi(str);
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
