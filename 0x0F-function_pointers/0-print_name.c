#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
* print_name - function uses pointer to a
* function to print a name
*
* @name: the name to pring
* @f: pointer to function to print name
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
