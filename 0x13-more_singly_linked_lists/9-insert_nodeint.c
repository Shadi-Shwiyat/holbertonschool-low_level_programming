#include "lists.h"

/**
 * insert_nodeint_at_index - function creates
 * a new node at a given position
 *
 * @head: pointer to the list
 * @idx: the position to insert new node
 * @n: the data for the new node
 *
 * Return: The address of new_node,
 * otherwise NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *prev, *current;
	unsigned int i = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (*head == NULL && idx == 0)
	{
		new_node->next = NULL;
		*head = new_node;
		return (new_node);
	}
	current = *head;
	prev = NULL;
	while (current != NULL)
	{
		if (i == idx)
		{
			new_node->next = current;
			if (prev != NULL)
				prev->next = new_node;
			else
				*head = new_node;
			return (new_node);
		}
		prev = current;
		current = current->next;
		i++;
	}
	if (i == idx)
	{
		new_node->next = NULL;
		prev->next = new_node;
		return (new_node);
	}
	free(new_node);
	return (NULL);
}
