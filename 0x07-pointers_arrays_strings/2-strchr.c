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
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	return ('\0');
}
