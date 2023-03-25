#include "lists.h"

/**
 * delete_dnodeint_at_index - function deletes
 * a node based on given index
 *
 * @head: pointer to the head node of dlistint
 * @index: an integer specifying the node to
 * delete
 *
 * Return: 1 on success, -1 if it fails
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *prev, *next;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	current = *head;
	if (index == 0)
	{
		next = current->next;
		free(current);
		if (next != NULL)
			next->prev = NULL;
		*head = next;
		return (1);
	}
	i = 0;
	while (i <= index && current != NULL)
	{
		if (i == index)
		{
			prev = current->prev;
			next = current->next;
			free(current);
			prev->next = next;
			if (next != NULL)
				next->prev = prev;
			return (1);
		}
		current = current->next;
		i++;
	}

	return (-1);
}
