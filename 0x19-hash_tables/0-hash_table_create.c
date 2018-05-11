#include "hash_tables.h"

/**
 * hash_table_create - create a hash
 * @size: The size of the array
 * Return: the hash table that was created
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash = 0;

	if (!(size > 0))
		return (NULL);

	new_hash = malloc(sizeof(hash_table_t));
	if (!new_hash)
		return (NULL);

	new_hash->array = malloc(sizeof(hash_node_t *) * size);
	if (!new_hash->array)
		return (NULL);

	new_hash->size = size;

	return (new_hash);
}
