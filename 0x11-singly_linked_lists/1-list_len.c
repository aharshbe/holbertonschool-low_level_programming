#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * list_len - return num of  elemnets in linked list
 * @h: linked list to be operated on
 *
 * Return: Always 0.
 */
size_t list_len(const list_t *h)
{
	int num_nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		num_nodes++;
	}
	return (num_nodes);
}
