#include "lists.h"

/**
 * print_dlistint_backward - function prints all
 * elements of a doubly linked list backwards
 *
 * @h: pointer to the head node of dlistint
 *
 * Return: The number of nodes in list
 */

size_t print_dlistint_backward(const dlistint_t *h)
{
	size_t total = 0;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		h = h->next;
		total++;
	}
	while (h->prev != NULL)
	{
		printf("%d\n", h->n);
		h = h->prev;
	}
	printf("%d\n", h->n);
	return (total + 1);
}
