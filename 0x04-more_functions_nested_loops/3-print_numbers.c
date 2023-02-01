#include "main.h"

/**
 * print_numbers - function prints numbers
 * 0 to 9 followed by a newline
 *
 * Return: Always 0
 */

void print_numbers(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		_putchar(num);
	}
	_putchar('\n');
}
