#include "hash_tables.h"

/**
 * hash_table_print - function prints a hash table
 * @ht: the hash table to print
 *
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	int first = 1;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			if (first)
			{
				printf("'%s': '%s'", node->key, node->value);
				first = 0;
			}
			else
				printf(", '%s': '%s'", node->key, node->value);
			node = node->next;
		}
	}
	printf("}\n");
}
