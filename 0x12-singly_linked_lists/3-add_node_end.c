#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - function adds a node
 * to a linked list
 * @head: the list to add a node to
 * @str: the string to place in the new node
 * Return: the address of new element, otherwise
 * NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
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
