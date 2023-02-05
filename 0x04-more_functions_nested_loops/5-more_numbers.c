#include "main.h"

/**
 * more_numbers - prints numbers 0 to 14
 * and repeats it 10 times
 *
 * Return: Void
 */

void more_numbers(void)
{
	int i;
	int num;

	for (i = 0; i <= 9; i++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
			{
				_putchar((num / 10) + '0');
			}
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
