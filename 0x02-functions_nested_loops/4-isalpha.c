#include "main.h"

/**
 * _isalpha - function checks
 * for alphabet character
 *
 * @c: The character to be checked
 *
 * Return: 1 for lower case and 0 for anything else
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	return (0);
}
