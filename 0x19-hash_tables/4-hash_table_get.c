#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the has table
 * @key: the key
 * Return: the value associated with the element, or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int i = 0;
	hash_node_t *to_check = 0;
	const unsigned char *key_copy = 0;

	if (!strcmp(key, "") || !key || !ht)
		return (NULL);

	key_copy = (const unsigned char *)key;
	i = key_index(key_copy, ht->size);

	if (ht->array[i])
	{
		to_check = ht->array[i];
		for ( ; strcmp(to_check->key, key) && to_check; to_check = to_check->next)
			;
		if (!strcmp(to_check->key, key))
			return (strdup(to_check->value));
	}
	return (NULL);
}
