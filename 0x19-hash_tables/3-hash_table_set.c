#include "hash_tables.h"

/**
 * hash_table_set - add element to the hash table
 * @key: the key
 * @value: value associated with the key
 * Return: 1 on success and 0 on failure
 */

int hash_table_set(hash_table_t *ht, const unsigned char *key, const char *value)
{
	int index = 0;
	hash_node_t *data = NULL;

	if (key)
		index = key_index(key, ht->size);
	else
		return (0);

	data = malloc(sizeof(hash_node_t));
	if (!data)
		return (0);

	data->key = key;
	data->value = value;
	data->next = NULL;

	while (ht[index])
	{
		++index;
		index %= ht->size;
	}
	ht[index] = data;
	return (1);

}
