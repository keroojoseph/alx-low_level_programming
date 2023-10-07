#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	int coins;
	int count;
	int coins_value[] = {25, 10, 5, 2, 1};
	int i;
	int arg = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		return 1;
	}
	if (arg < 0)
	{
		printf("0\n");
		return 0;
	}
	for (i = 0; i < 5; i++)
	{
		coins = arg / coins_value[i];
		count += coins;
		arg -= coins * coins_value[i];
	}
	printf("%d\n", count);
	return 0;
}

