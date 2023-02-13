#include "main.h"

/**
 * *_strstr - function locates a substring
 *
 * @haystack: the thing to search through
 * @needle: the thing you are looking for
 *
 * Return: a pointer to the byte in haystack
 *	that matches one of the bytes
 *	in needle, or NULL if no such
 *	bytes are found
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int len1 = 0;
	unsigned int i, j;

	while (haystack[len1] != '\0')
	{
		len1++;
	}

	for (i = 0; i < len1; i++)
	{
		for (j = 0; j < 1; j++)
		{
			if (needle[j] == haystack[i])
			{
				return (haystack + i);
			}
		}
	}


	return ('\0');
}
