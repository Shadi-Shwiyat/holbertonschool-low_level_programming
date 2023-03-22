#include "lists.h"

/**
 * print_dlistint - function prints all
 * elements of a doubly linked list
 *
 * @h: pointer to the head node of dlistint
 *
 * Return: The number of nodes in list
 */

size_t print_dlistint(const dlistint_t *h)
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
		printf("%d\n", h->n);
		h = h->next;
		total++;
	}
	printf("%d\n", h->n);
	return (total + 1);
}
