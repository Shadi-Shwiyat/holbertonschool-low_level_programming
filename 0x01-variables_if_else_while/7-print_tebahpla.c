#include <stdio.h>

/**
 * main - function prints alphabet in lowercase
 * and reverses it
 *
 * Return: Always 0
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a' ; alphabet--)
	{
		putchar(alphabet);
	}
	putchar('\n');

	return (0);
}
