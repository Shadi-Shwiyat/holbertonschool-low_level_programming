#include "main.h"

/**
 * *string_toupper - function changes all letters
 *	of a string to an uppercase
 *
 * @s: the string to be converted to uppercase
 *
 *
 * Return: char
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
		}
		s++;
	}
	s[i] = '\0';

	return (s);
}
