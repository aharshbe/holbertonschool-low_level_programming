#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;
    hash_node_t *current;

    ht = hash_table_create(1024);
    hash_table_set(ht, "betty", "holberton");
    hash_table_set(ht, "frank", "holberton");
    hash_table_set(ht, "austin", "mcdormant");

    printf("%s\n", *ht->array->key);

    current = *ht->array;
    
    for (int i = 0; i < 10; current = current->next, i++)
    	printf("%s\n", current->value);


    return (EXIT_SUCCESS);
}
