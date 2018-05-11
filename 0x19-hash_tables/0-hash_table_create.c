#include "hash_tables.h"

/**
 * hash_table_create - create a hash
 * @size: The size of the array
 * Return: the hash table that was created
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash = NULL;
	hash_node_t **array = NULL;

	array = malloc(sizeof(hash_node_t) * size);
	if (!array)
		return (NULL);
	new_hash = malloc(sizeof(hash_table_t));
	if (!new_hash)
	{
		free(array);
		return (NULL);
	}
	new_hash->size = size;
	new_hash->array = array;

	return (new_hash);
}
