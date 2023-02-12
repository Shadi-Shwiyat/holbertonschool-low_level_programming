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
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] -= 32;
		}
		s++;
	}

	return (s);
}
