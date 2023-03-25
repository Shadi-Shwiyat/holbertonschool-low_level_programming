#include "lists.h"

/**
 * add_dnodeint_end - function adds a new node
 * to the end of a dlinked list
 *
 * @head: pointer to the head node of dlistint
 * @n: the data for the new node
 *
 * Return: The address of new node, otherwise
 * NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp;

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

	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	temp->next = new_node;
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = temp;

	return (new_node);
}
