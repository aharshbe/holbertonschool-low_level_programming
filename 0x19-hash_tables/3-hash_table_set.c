#include "hash_tables.h"

/**
 * hash_table_set - add element to the hash table
 * @key: the key
 * @value: value associated with the key
 * Return: 1 on success and 0 on failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int index = 0;
	hash_node_t *newpair, *next, *last;

	newpair = next = last = NULL;
	index = key_index(key, ht->size);
	next = ht->array[index];

	for ( ; next && next->key && strcmp(key, next->key) > 0; last = next, next = next->next)
		;

	/* Pair found, replace string */
	if (next && next->key && strcmp(key, next->key) == 0)
		next->value = strdup(value);
	else	/* No pair, add new node */
	{
		newpair = ht_newpair(key, value);
		if (!newpair)
			return (0);

		if (next == ht->array[index])
		{
			newpair->next = next;
			ht->array[index] = newpair;
		}
		else if (!next) /* at end of list */
			last->next = newpair;
		else /* in middle of list */
		{
			newpair->next = next;
			last->next = newpair;
		}
	}
	return (1);
}

hash_node_t *ht_newpair(const char *key, const char *value)
{
	hash_node_t *new = NULL;

	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (NULL);
	new->value = strdup(value);
	new->key = strdup(key);
	new->next = NULL;

	return (new);
}
