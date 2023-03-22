#include "lists.h"

/**
 * add_dnodeint - function adds a new node
 * to the beginning of a dlinked list
 *
 * @head: pointer to the head node of dlistint
 * @n: the data for the new node
 *
 * Return: The address of new node, otherwise
 * NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (*head == NULL)
	{
		*head = malloc(sizeof(dlistint_t));
		if (*head == NULL)
			return (NULL);
		(*head)->n = n;
		(*head)->next = NULL;
		(*head)->prev = NULL;
		return (*head);
	}

	while ((*head)->prev != NULL)
	{
		*head = (*head)->prev;
	}
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	(*head)->prev = new_node;
	*head = new_node;

	return (new_node);
}
