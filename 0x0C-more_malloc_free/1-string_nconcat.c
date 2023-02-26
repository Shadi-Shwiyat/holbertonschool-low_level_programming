#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - function concatenates two
 * strings, while stopping at n bytes on the
 * second string
 *
 * @s1: the string to start with
 * @s2: the string to concatenate onto s1
 * @n: the number of bytes from s2 to concatenate
 *
 * Return: a pointer to the newly concatenated
 * strings, otherwise NULL if the function fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, x, y;
	char *s;

	i = 0;
	while (s1[i] != '\0')
		i++;

	j = 0;
	while (s2[j] != '\0' && j < n)
		j++;

	s = malloc(sizeof(char) * (i + j + 1));

	if (s == NULL)
		return (NULL);

	for (x = 0; x < i; x++)
		s[x] = s1[x];

	for (y = 0; y < j; y++)
		s[x + y] = s2[y];

	s[x + y] = '\0';

	return (s);
}
