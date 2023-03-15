#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - function prints all elements of
 * a silgly linked list
 * @h: the list passed to print as arguement
 * Return: The number of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		if (current->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", current->len, current->str);
		}
		count++;
		current = current->next;
	}

	return (count);
}
