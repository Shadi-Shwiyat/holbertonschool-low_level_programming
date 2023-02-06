#include "main.h"

/**
 * swap_int - function swaps the value of two int
 *
 *@a: first variable to swap
 *@b: second variable to swap
 *
 * Return: Void
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
