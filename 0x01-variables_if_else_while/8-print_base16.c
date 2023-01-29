#include <stdio.h>

/**
 * main - function prints all numbers in
 * base 16
 *
 * Return: Always 0
 */

int main(void)
{
	int numbers;
	char letters;

	for (numbers = '0'; numbers <= '9'; numbers++)
	{
		putchar(numbers);
	}

	for (letters = 'a'; letters <= 'f'; letters++)
	{
		putchar(letters);
	}

	putchar('\n');

	return (0);
}
