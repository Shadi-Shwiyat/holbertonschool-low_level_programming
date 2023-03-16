#include "lists.h"
#include <stddef.h>

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
	list_t *current;
	size_t len;

	current = malloc(sizeof(list_t));
	if (current == NULL)
		return (NULL);

	current->str = strdup(str);
	if (current->str == NULL)
	{
		free(current);
		return (NULL);
	}

	len = strlen(current->str);
	current->len = len;
	current->next = *head;
	*head = current;

	return (current);
}
