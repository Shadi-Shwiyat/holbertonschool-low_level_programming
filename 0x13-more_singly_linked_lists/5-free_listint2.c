#include "lists.h"

/**
 * free_listint2 - function frees a list,
 * then sets head to NULL
 *
 * @head: pointer to the list
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
	*head = NULL;
}
