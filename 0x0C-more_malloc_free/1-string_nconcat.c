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
	unsigned int i = 0, j = 0, x = 0, y = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;

	while (s2[j])
		j++;

	if (n >= j)
		y = i + j;
	else
		y = i + n;

	s = malloc(sizeof(char) * y + 1);

	if (s == NULL)
		return (NULL);

	j = 0;
	while (x < y)
	{
		if (x <= i)
			s[x] = s1[x];

		if (x >= i)
		{
			s[x] = s2[j];
			j++;
		}
		x++;
	}
	s[x] = '\0';
	return (s);
}
