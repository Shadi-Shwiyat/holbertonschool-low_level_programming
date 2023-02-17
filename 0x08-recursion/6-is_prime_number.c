#include "main.h"

int _prime(int n, int i);

/**
 * is_prime_number - returns an int whether n is prime or not
 *
 * @n: the number to check
 *
 * Return: 1 for prime number, otherwise 0
 */

int is_prime_number(int n)
{


	if (n < 2)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	else
	{
		return (_prime(n, n - 1));
	}
}

/**
 * _prime - function checks if n is prime
 *
 * @n: the number to check
 * @i: a number to iterate to find if n is prime
 *
 * Return: 1 for prime, otherwise 0
 */

int _prime(int n, int i)
{
	if (i == 1)
	{
		return (i);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (_prime(n, i - 1));
	}
}
