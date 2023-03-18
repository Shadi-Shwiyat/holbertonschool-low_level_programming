#include "lists.h"

/**
 * delete_nodeint_at_index - function deletes
 * a new node at a given position
 *
 * @head: pointer to the list
 * @index: the position in the list to delet
 *
 * Return: 1 if the program succeeded, otherwise
 * -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev, *current;
	unsigned int i = 0;

	if (*head == NULL || head == NULL)
		return (-1);
	if (index == 0)
	{
		prev = *head;
		*head = (*head)->next;
		free(prev);
		return(1);
	}
	current = *head;
	prev = NULL;
	while (current != NULL)
	{
		if (i == index)
		{
			prev->next = current->next;
			free(current);
			return (1);
		}
		prev = current;
		current = current->next;
		i++;
	}
	if (i == index)
	{
		prev->next = NULL;
		free(current);
		return (1);
	}
	return (-1);
}
