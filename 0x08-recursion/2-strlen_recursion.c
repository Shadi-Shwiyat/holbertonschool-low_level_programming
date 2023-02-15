#include "main.h"

/**
 * _strlen_recursion - returns length of a string
 *
 * @s: the string to print
 *
 * Return: Integer number of the lenght of a string
 */

int _strlen_recursion(char *s)
{


	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
