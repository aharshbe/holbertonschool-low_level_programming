#include "hash_tables.h"

/**
 * hash_table_set - add element to the hash table
 * @key: the key
 * @value: value associated with the key
 * Return: 1 on success and 0 on failure
 */

int hash_table_set(hash_table_t *ht, const unsigned char *key, const char *value)
{
	hash_node_t *new_data = NULL, *current = NULL;

	if (!key)
		return (0);
	printf("key: %s\n", key);
	printf("value: %s\n", value);
	printf("hash size: %lu\n", ht->size);


	new_data = malloc(sizeof(hash_node_t));
	if (!new_data)
		return (0);

	new_data->value = value;
	new_data->key = key;
	printf("addr of key is: %p\n", new_data->key);
	new_data->next = NULL;
	printf("the addr of new is: %p\n", new_data);

	if (!ht->array)
	{
		ht->array = &new_data;
		current = *ht->array;
		printf("new data: %p\n", current);
		printf("new data: %s\n", current->key);
		return (1);
	}
	else
		printf("in new two\n");
		current = *ht->array;
		for ( ; current; current = current->next)
			;
		current = new_data;
		printf("new data: %p\n", current);
		printf("new data: %s\n", current->key);
	return (1);
}
