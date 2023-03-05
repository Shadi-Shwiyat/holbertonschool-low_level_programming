#include <stdio.h>
#include "function_pointers.h"

/**
* int_index - function searches for an integer
*
* @array: array to search
* @size: size of the array
* @cmp: function pointer
*
* Return: index of the first element in which
* cmp function does not return 0, otherwise -1
* if no matche is found or size is <= 0
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
