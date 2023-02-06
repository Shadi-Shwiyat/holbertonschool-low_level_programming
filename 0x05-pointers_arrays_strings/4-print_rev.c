#include "main.h"

/**
 * print_rev - function that prints a string in reverse
 * @s: the string to be printed
 *
 * Return: void
 */

void print_rev(char *s)
{
	int scounter = 0;
	int x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
	scounter++;
	}

	for (y = (scounter - 1); y >= 0; y--)
	{
		_putchar(s[y]);
	}
	_putchar('\n');
}
