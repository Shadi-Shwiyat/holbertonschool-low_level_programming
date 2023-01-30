#include "main.c"

/**
 * main - Program uses _putchar to print 
 * alphabet in lowercase
 *
 * Return: void
 */

void print_alphabet(void)
{
	char alphabet;

	for( alphabet= 'a'; alphabet<= 'z'; alphabet++ )
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
