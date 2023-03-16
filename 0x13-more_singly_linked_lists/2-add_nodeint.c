#include "lists.h"

/**
 * add_nodeint - fucntion adds a new
 * node to the beginning of a list
 *
 * @head: pointer to the list
 * @n: the int to store in new node
 *
 * Return: address of new element
 * or NULL if the fucntion failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
