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
	unsigned int len2 = 0;

	while (haystack[len1] != '\0')
	{
		while (needle[len2] != '\0')
		{
			if (haystack[len1] == needle[len2] && needle[len2] != '\0')
			{
				len1++;
				len2++;
			}
			else
			{
				len1++;
			}
		}
		if (needle[len2] == '\0')
		{
			return (haystack + (len1 - len2));
		}
	}

	return ('\0');
}
