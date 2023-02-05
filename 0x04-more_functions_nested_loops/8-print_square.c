#include "main.h"

/**
 * print_square - prints a square
 * with a size that is equivilant
 * to the variable given
 * @size: the size of the square
 *
 *
 * Return: Void
 */

void print_square(int size)
{
	int num1, num2;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (num1 = 0; num1 < size; num1++)
		{
			for (num2 = 0; num2 < size; num2++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
