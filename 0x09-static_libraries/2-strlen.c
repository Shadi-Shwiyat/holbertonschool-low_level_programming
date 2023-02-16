#include "main.h"

/**
 * _strlen - function returns lenghts of string
 *
 *@s: string to determine its lenght
 *
 *
 * Return: lenght of string
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length = length + 1;
		s = s + 1;
	}

	return (length);
}
