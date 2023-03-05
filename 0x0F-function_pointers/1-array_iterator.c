#include <stdio.h>
#include "function_pointers.h"

/**
* array_iterator - function performs another functoin
* given as a parameter on each element of an array
*
* @array: the array to perform the action on
* @size: size of the array
* @action: pointer to function used on elements of
* the array
*
* Return: Void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
