#include "main.h"

/**
 * *_strchr - function locates a character in a string
 *
 * @s: the string to search
 * @c: the character to find
 *
 * Return: pointer to first occurance of char c
 *	in string or NULL if character is not found
 */

char *_strchr(char *s, char c)
{
	int len = 0;
	int i;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	return ('\0');
}
