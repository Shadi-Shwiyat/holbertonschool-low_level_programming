#include "main.h"

/**
 * print_diagsums - function adds the numbers
 *	of diagonals in a 2D array
 * @a: 2D array to get summands
 * @size: the size of the 2D array
 *
 * Return: void
 */

#include <stdio.h>

void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + i);
		sum2 += *(a + i * size + (size - 1 - i));
	}

	printf("%d, %d\n", sum1, sum2);
}
