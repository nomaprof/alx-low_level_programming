#include "hash_tables.h"

/**
 * hash_table_delete - remove a hash table
 * @ht: pointer to the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *node, *temp;
	unsigned long int m;

	for (m = 0; m < ht->size; m++)
	{
		if (ht->array[m] != NULL)
		{
			node = ht->array[m];
			while (node != NULL)
			{
				temp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = temp;
			}
		}
	}
	free(head->array);
	free(head);
}
