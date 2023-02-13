#include "main.h"

/**
 * *_strspn - function get the length of a prefix substring
 *
 * @s: the string to search
 * @accept: the list of bytes to check for
 *
 * Return: number of bytes in initial 
 *	segment s, which consist only of 
 *	bytes from accept
 */

unsigned int _strspn(char *s, char*accept)
{
	unsigned int initial_length = 0;
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int i, j;

	while (s[len1] != 32)
	{
		len1++;
	}
	while (s[len2] != '\0')
	{
		len2++;
	}

	for (i = 0; i < len1; i++)
	{
		for (j = 0; j < len2; j++)
		{
			if (accept[j] == s[i])
			{
				initial_length++;
			}
		}
	}


	return (initial_length);
}
