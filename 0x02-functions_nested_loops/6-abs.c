#include "main.h"

/**
 *_abs - function that computes the absolute value of an integer
 *Description: function check number
 *@n: int parameter
 *Return:-n is n < 0
*/

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
		return (n);
	return (0);
}
