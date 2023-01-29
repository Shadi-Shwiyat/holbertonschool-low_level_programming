#include <stdio.h>

/**
 * main - function prints all numbers in
 * base 10 starting with 0
 *
 * Return: Always 0
 */

int main(void)
{
	int numbers;

	for (numbers = 0; numbers <= 9; numbers++)
	{
		printf("%d", numbers);
	}

	printf("\n");

	return (0);
}
