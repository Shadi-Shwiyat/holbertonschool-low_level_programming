#include "main.h"

/**
 * *_strcmp - function compares two strings
 * and returns whichever string is greater
 *
 * @s1: first string to compare
 * @s2: second string to compare
 *
 *
 * Return: If s1 != s2, return s1 - s2
 *	if s1 == s2, return 0
 */

int _strcmp(char *s1, char *s2)
{
	int s1len = 0;
	int s2len = 0;

	while (s1[s1len] != '\0' && s2[s2len] != '\0')
	{
		if (s1[s1len] != s2[s2len])
		{
			return (s1[s1len] - s2[s2len]);
		}
		s1len++;
		s2len++;
	}
	return (0);
}
