#include "main.h"

/**
 * _print_rev_recursion - function prints a string recursively
 * in reverse order
 *
 * @s: the string to print
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
