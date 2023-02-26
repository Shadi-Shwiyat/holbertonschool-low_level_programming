#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - function allocates memory
 * and returns a pionter to the allocated memory
 *
 * @b: the number of bytes to allocate
 *
 * Return: a pointer to the allocated memory
 * otherwise returns 98 if the allocation fails
 */

void *malloc_checked(unsigned int b)
{
	int *s;

	s = malloc(b);

	if (s == NULL)
	{
		exit(98);
	}
	else
	{
		return (s);
	}
}
