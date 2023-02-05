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
	int num1, num2;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (num1 = 0; num1 < n; num1++)
		{
			for (num2 = 0; num2 < num1; num2++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
