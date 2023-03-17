#include "lists.h"

/**
 * get_nodeint_at_index - function returns the nth
 * node of a linked list
 *
 * @head: pointer to the list
 * @index: the node to return
 *
 * Return: The nth node of a linked
 * list otherwise NULL if the node does
 * not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (head != NULL)
	{
		if (i == index)
		{
			current = head;
			return (current);
		}
		head = head->next;
		i++;
	}
	return (NULL);
}
