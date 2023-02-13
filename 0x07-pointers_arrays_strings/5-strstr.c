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
	int needle_len = 0;
	int haystack_len = 0;
	int i, j;

	while (haystack[haystack_len] != '\0')
	{
		haystack_len++;
	}
	while (needle[needle_len] != '\0')
	{
		needle_len++;
	}

	for (i = 0; i <= haystack_len - needle_len; i++)
	{
		for (j = 0; j < needle_len; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}
		if (j == needle_len)
		{
			return (haystack + i);
		}
	}
	return ('\0');

}
