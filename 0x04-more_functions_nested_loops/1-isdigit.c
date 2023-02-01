#include "main.h"

/**
 * _isdigit - checks for a digit and
 * returns a 1 if it exist and 0 if not
 *
 * @c: the character that is checked
 *
 * Return: 1 if uppercase otherwise 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
