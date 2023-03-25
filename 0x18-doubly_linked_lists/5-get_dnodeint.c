#include "lists.h"

/**
 * get_dnodeint_at_index - function returns a
 * node specified by an index
 *
 * @head: pointer to the head node of dlistint
 * @index: an integer specifying the node to
 * return
 *
 * Return: The address of node at index, otherwise
 * NULL if it does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i, count;

	if (head == NULL)
	{
		return (NULL);
	}

	current = head;
	count = 0;
	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	if (index >= count)
		return (NULL);

	i = 0;
	current = head;
	while (i < index && current != NULL)
	{
		current = current->next;
		i++;
	}

	return (current);
}
