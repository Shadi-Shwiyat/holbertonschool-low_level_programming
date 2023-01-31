#include "main.h"

/**
 * print_last_digit - function prints last digit of an integer
 *
 * @n: Number to be checked
 *
 * Return: last digit of number or 0
 */

int print_last_digit(int n)
{
	n = n % 10;

	if (n < 0)
	{
		n = n * -1;
	}

	_putchar(n + '0');

	return (n);
}
