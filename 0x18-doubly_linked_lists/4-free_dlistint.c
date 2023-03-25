#include "lists.h"

/**
 * free_dlistint - function frees a
 * doubly linked list
 *
 * @head: a pointer to the list to
 * free
 *
 * Return: Void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head != NULL)
	{
		current = head->next;
		free(head);
		head = current;
	}
}
