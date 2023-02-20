#include "main.h"
#include <stdlib.h>
/**
 * str_concat - function concatenates two strings
 *
 * @s1: the string to start with
 * @s2: the string to concatenate
 *
 * Return: NULL if the program fails, otherwise a pointer
 * to the newly concatenated strings
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, x = 0, y = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i])
	{
		i++;
	}
	while (s2[j])
	{
		j++;
	}

	x = i + j;
	s = malloc((x * sizeof(char)) + 1);

	if (s == NULL)
		return (NULL);

	j = 0;
	while (y < x)
	{
		if (y <= i)
			s[y] = s1[y];

		if (y >= i)
		{
			s[y] = s2[j];
			j++;
		}
		y++;
	}
	s[y] = '\0';
	return (s);
}
