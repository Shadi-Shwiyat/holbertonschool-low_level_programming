#include "lists.h"

/**
 * pop_listint - function deletes the head
 * node of a list, and returns the head node's
 * data
 *
 * @head: pointer to the list
 *
 * Return: The interger value of the head node,
 * otherwise if the head is empty return 0
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *current;

	if (head == NULL)
		return (-1);

	current = *head;
	*head = (*head)->next;
	n = current->n;
	if (current == NULL)
		return (0);

	free(current);
	return (n);
}
