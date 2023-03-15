#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - function counts elements in
 * a singly linked list
 * @h: the list passed to count as arguement
 * Return: The number of nodes
 */

size_t list_len(const list_t *h)
{
	const list_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		if (current->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		count++;
		current = current->next;
	}

	return (count);
}
