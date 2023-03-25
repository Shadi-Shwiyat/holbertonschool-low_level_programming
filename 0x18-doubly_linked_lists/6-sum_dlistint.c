#include "lists.h"

/**
 * sum_dlistint - function returns the sum
 * of all elements in a doubly linked list
 *
 * @head: pointer to the head node of doubly
 * linked list
 *
 * Return: The sum of elements in dlist,
 * otherwise 0 if list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	current = head;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
