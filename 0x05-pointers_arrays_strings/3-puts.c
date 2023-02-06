#include "main.h"

/**
 * _puts - function prints a string to stdout
 *
 *@str: string to output
 *
 *
 * Return: Void
 */

void _puts(char *str)
{
	for(; *str != '\0';)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
