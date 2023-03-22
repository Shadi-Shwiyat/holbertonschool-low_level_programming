#include "lists.h"

/**
 * dlistint_len - function returns number
 * of elements in a doubly linked list
 *
 * @h: pointer to the head node of dlistint
 *
 * Return: The number of nodes in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t total = 0;

	if (h == NULL)
		return (0);

	while (h->prev != NULL)
	{
		h = h->prev;
	}
	while (h->next != NULL)
	{
		h = h->next;
		total++;
	}
	return (total + 1);
}
