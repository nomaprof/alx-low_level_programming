#include "hash_tables.h"

/**
 * hash_table_print - get a full hash table printed
 * @ht: pointer to the table
 *
 * Description: print the hash table contents in the order entered
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int m;
	unsigned char the_flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (m = 0; i < ht->size; m++)
	{
		if (ht->array[m] != NULL)
		{
			if (the_flag == 1)
				printf(", ");

			node = ht->array[m];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			the_flag = 1;
		}
	}
	printf("}\n");
}
