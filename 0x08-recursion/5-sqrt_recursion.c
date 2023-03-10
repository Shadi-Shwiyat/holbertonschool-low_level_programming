#include "main.h"

/**
 * _sqrt_recursion - function returns the natural square
 * root of a number
 *
 * @n: the number to square
 * @i: the natural square we are trying to find
 *
 * Return: -1 if n does not have a sqrt
 *	otherwise returns the value of sqrt of n
 */
int _sqrt(int n, int i);


int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - a function that finds the square root and
 * returns it to the recursion function
 *
 * @n: the number to square
 * @i: the natural square we are trying to find
 *
 * Return: the square root
 */


int _sqrt(int n, int i)
{
	if (n == 0 || n == 1)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (_sqrt(n, i + 1));
	}
}
