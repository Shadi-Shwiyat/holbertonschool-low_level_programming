#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function returns a pointer to a
 * newly allocated space in memory, which contains
 * a copy of the string given as a parameter
 *
 * @str: the string to copy
 *
 * Return: NULL if str = NULL or if insufficient
 * memory is available, otherwise Returns a pointer
 * to the new string
 */

char *_strdup(char *str)
{
	int i;
	int j;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}

	i = 1;
	while (str[i])
	{
		i++;
	}

	s = malloc((i * sizeof(char)) + 1);

	if (s == NULL)
	{
		return (NULL);
	}

	j = 0;
	while (j < i)
	{
		s[j] = str[j];
		j++;
	}

	s[j] = '\0';
	return (s);
}
