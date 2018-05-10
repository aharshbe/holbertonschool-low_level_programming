#include "hash_tables.h"

/**
 * key_index - provde key at given index
 * @key: the key
 * @size: the size of the arrat
 * Return: the index at which the key/value pair was stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
