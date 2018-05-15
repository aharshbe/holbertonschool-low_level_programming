#include "hash_tables.h"


/**
 * hash_table_delete - delete hash table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int c = 0;
	hash_node_t *to_free = 0, *save = 0;

	if (!ht)
		return;
	for ( ; c < ht->size; c++)
	{
		for (to_free = ht->array[c]; to_free; to_free = save)
		{
			save = to_free->next;
			free(to_free->key);
			free(to_free->value);
			free(to_free);
		}
	}
	free(ht->array);
	free(ht);
}
