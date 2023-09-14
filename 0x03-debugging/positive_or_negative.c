#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Entry point
 *
 *Description: print random number
 *Return: 0 is seccess
*/

void positive_or_negative(int i)
{
        if (i > 0)
        {
                printf("%d is positive\n", i);
        }
        else if (i == 0)
        {
                printf("%d is zero\n", i);
        }
        else if (i < 0)
        {
                printf("%d is negative\n", i);
        }
}
