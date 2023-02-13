#include "main.h"

/**
 * *_strpbrk - function searches for a string
 *	for any set of bytes
 *
 * @s: the string to search
 * @accept: the list of bytes to check for
 *
 * Return: a pointer to the byte in s
 *	that matches one of the bytes
 *	in accept, or NULL if no such
 *	bytes are found
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int i, j;

	while (s[len1] != '\0')
	{
		len1++;
	}
	while (accept[len2] != '\0')
	{
		len2++;
	}

	for (i = 0; i < len1; i++)
	{
		for (j = 0; j < len2; j++)
		{
			if (accept[j] == s[i])
			{
				return (s + i);
			}
		}
	}


	return ('\0');
}
