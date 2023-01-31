#include "main.h"

/**
 * _abs - function prints absolute value of an integer
 *
 * @n: Number to be checked
 *
 * Return: Absolute value of a given number, or 0
 */

int _abs(int n)
{
	if (n < 0)
	{
		int absolute;
		absolute = n * -1;
		return (absolute);
	}
	return (n);
}
