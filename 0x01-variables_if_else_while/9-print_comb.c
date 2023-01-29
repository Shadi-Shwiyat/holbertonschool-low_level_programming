#include <stdio.h>

/**
 * main - function prints all combinations
 * of single digit numbers
 *
 *
 * Return: Always 0
 */

int main(void)
{
	int numbers;

	for (numbers = '0'; numbers <= '9'; numbers++)
	{
		putchar(numbers);

		if (numbers != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
