#include "lists.h"
#include <stddef.h>

/**
 * add_node_end - function adds a node
 * to the end of a linked list
 * @head: the list to add a node to
 * @str: the string to place in the new node
 * Return: the address of new element, otherwise
 * NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *current;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(new_node->str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	current = *head;
	while (current->next != NULL)
		current = current->next;

	current->next = new_node;

	return new_node;
}
