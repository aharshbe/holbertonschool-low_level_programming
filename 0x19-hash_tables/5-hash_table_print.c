#include "hash_tables.h"

/**
 * hash_table_print - print hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int c = 0;
	int recall = 0;
	hash_node_t *val;

	if (!ht)
		return;
	printf("{");
	if (!ht->array)
	{
		printf("}\n");
		return;
	}
	for ( ; c < ht->size; c++)
	{
		for (val = ht->array[c]; val; val = val->next)
		{
			if (recall)
				printf(", ");
			printf("'%s': '%s'", val->key, val->value);
			recall = 1;
		}
	}
	printf("}\n");
}
