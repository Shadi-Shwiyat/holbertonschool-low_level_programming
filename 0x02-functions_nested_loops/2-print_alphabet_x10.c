#include "main.h"

/**
 * print_alphabet_x10 - prints
 * alphabet in lower case 10 times
 *
 * Return: Void
 */

void print_alphabet_x10(void)
{
	int x = 0;
	char alpha;

	while (x <= 9)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
		(x++);
	}
}
