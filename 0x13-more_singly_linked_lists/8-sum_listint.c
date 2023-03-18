#include "lists.h"

/**
 * sum_listint - function returns the sum
 * of all data in a linked list
 *
 * @head: pointer to the list
 *
 * Return: The sum of n otherwise
 * returns 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
