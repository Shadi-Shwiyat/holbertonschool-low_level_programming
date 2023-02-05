#include "main.h"

/**
 * print_line - prints a line with a length
 * equivilant to the variable given
 * @n: the number of lines to print
 * 
 *
 * Return: Void
 */

void print_line(int n)
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
			_putchar('_');
		}
		_putchar('\n');
	}
}
