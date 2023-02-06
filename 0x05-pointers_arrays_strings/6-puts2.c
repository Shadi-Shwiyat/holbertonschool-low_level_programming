#include "main.h"

/**
 * puts2 - function prints every other char of a
 * string starting with the first char
 * @str: input
 *
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
		{
			_putchar(str[i]);
		}
		else
		{
			continue;
		}
	}
	_putchar('\n');
}
