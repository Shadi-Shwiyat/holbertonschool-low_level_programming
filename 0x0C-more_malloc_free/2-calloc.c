#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - function allocates memory for an
 * array using malloc
 *
 * @nmemb: the number of elements in the array
 * @size: the number of bytes in each element
 *
 * Return: a pointer to the newly allocated
 * memory, otherwise NULL if the function fails
 * or nmemb is 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *s;

	if (nmemb == 0 || size == 0)
		return (NULL);

	s = malloc(nmemb * size);

	if (s == NULL)
		return (NULL);

	i = 0;
	while (i < nmemb * size)
	{
		s[i] = 0;
		i++;
	}
	return (s);
}

