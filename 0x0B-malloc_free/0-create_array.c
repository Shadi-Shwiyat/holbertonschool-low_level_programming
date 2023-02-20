#include "main.h"
#include <stdlib.h>

/**
 * create_array - function creates an array of chars,
 * and initializes it with a specific char
 *
 * @size: the size of the array
 * @c: the character to initialize the array with
 *
 * Return: NULL if size=0 or if the program fails,
 * otherwise Returns a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
	{
		return (NULL);
	}

	s = malloc(size * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
