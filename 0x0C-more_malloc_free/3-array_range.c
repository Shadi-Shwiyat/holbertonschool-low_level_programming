#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - function creates an array
 * of integers based on a min and max variable
 *
 * @min: the minimum values to start from
 * @max: the maximum values to end with
 *
 * Return: a pointer to the newly allocated
 * array, other wise NULL if malloc fails or
 * min is greater than max
 */

int *array_range(int min, int max)
{
	int i;
	int *s;

	if (min > max)
		return (NULL);

	s = malloc ((sizeof(int) * (max - min)) + sizeof(int));

	if (s == NULL)
		return (NULL);

	i = 0;
	while (min <= max)
	{
		s[i] = min;
		i++;
		min++;
	}

	return (s);
}

