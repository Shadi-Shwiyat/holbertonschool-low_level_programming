#include "main.h"

/**
 * *string_toupper - function changes all letters
 *	of a string to an uppercase
 *
 * @str: the string to be converted to uppercase
 *
 *
 * Return: char
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		str++;
	}
	str[i] = '\0';

	return (str);
}
