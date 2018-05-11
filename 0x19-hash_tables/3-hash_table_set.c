#include "hash_tables.h"

/**
 * hash_table_set - add element to the hash table
 * @ht: the has table
 * @key: the key
 * @value: value associated with the key
 * Return: 1 on success and 0 on failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int i = 0;
	const unsigned char *key_copy = 0;
	hash_node_t *newpair = 0, *tocheck = 0;

	if (!strcmp(key, "") || !key || !ht)
		return (0);

	key_copy = (const unsigned char *)key;
	i = key_index(key_copy, ht->size);

	if (!ht->array[i])
	{
		newpair = ht_newpair(key, value);
		if (!newpair)
			return (0);
		ht->array[i] = newpair;
		return (1);
	}
	tocheck = ht->array[i];
	for ( ; tocheck; tocheck = tocheck->next)
	{
		if (!strcmp(key, tocheck->key))
		{
			tocheck->value = strdup(value);
			return (1);
		}
	}
	newpair = ht_newpair(key, value);
	if (!newpair)
		return (0);
	newpair->next = ht->array[i];
	ht->array[i] = newpair;
	return (1);
}

/**
 * ht_newpair - create new node in hash table
 * @key: the key
 * @value: value associated with the key
 * Return: the new node or null
 */
hash_node_t *ht_newpair(const char *key, const char *value)
{
	hash_node_t *newpair = 0;

	newpair = malloc(sizeof(hash_node_t));
	if (!newpair)
		return (NULL);
	newpair->key = strdup(key);
	if (!newpair)
	{
		free(newpair);
		return (NULL);
	}
	newpair->value = strdup(value);
	if (!newpair)
	{
		free(newpair);
		return (NULL);
	}
	newpair->next = 0;
	return (newpair);
}
