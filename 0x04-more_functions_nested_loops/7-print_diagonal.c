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
	int num1;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (num1 = 1; num1 <= n; num1++)
		{
			if (num1 == n)
			{
				_putchar('\\');
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
