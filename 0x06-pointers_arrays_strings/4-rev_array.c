#include "main.h"

/**
 * reverse_array - function reverses the content
 * of an array of integers
 *
 * @a: the array to be reversed
 * @n: number of elements in the array
 *
 *
 * Return: Void
 */

void reverse_array(int *a, int n)
{
	int temp;
	int i;

	n--;
	for (i = 0; i < n; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		n--;
	}
}
