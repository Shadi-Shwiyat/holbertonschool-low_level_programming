#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * with a lenght that is equivilant
 * to the variable given
 * @n: the number of lines to print
 *
 *
 * Return: Void
 */

void print_diagonal(int n)
{
	int num;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (num = 0; num < n; num++)
		{
			_putchar('\\');
		}
		_putchar('\n');
	}
}
