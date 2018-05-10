#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *nh = NULL;

	nh = malloc(sizeof(hash_table_t) * size);
	if (!nh)
		return (NULL);

	nh->size = size;
	nh->array = NULL;

	return (nh);

}
