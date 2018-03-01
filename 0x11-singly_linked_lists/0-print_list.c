#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - print linked list
 * @h: linked list to be operated on
 *
 * Return: return the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t num_nodes = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		num_nodes++;
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (num_nodes);
}
