#include "function_pointers.h"

/**
 *print_name - function print name
 *@name: parameter one set of characyer
 *@f: function pointer
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
