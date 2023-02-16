#include "main.h"

/**
 * _sqrt_recursion - function returns the natural square
 * root of a number
 *
 * @n: the number to square
 *
 * Return: -1 if n does not have a sqrt
 *	otherwise returns the value of sqrt of n
 */

int _sqrt_recursion(int n)
{
	int i;

	if (n == 0 || n == 1)
	{
		return (n);
	}
	if (n < 0)
	{
		return (-1);
	}
	for (i = 0; i * i <= n; i++)
	{
		if (i * i == n)
		{
			return (i);
		}
		else if (i * i > n)
		{
			break;
		}
	}

	return (_sqrt_recursion(n - (i - 1) * (i - 1)));
}
