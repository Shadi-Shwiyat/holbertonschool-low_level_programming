#include "main.h"

/**
 * factorial - returns the factorial of a given number
 *
 * @n: the number to factorial
 *
 * Return: -1 if n < 0
 *	otherwise returns the value of !n
 */

int factorial(int n)
{


	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
		return (1);
	}
	else
	{
		return (n * (factorial(n - 1)));
	}
}
