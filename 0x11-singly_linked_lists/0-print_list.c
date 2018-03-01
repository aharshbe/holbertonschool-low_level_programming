#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - print linked list
 * @h: linked list to be operated on
 *
 * Return: Always 0.
 */
size_t print_list(const list_t *h)
{
	int num_nodes = 0;

	if (!h)
		return (NULL);

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)");
		}
		else
		{
			printf("[%d] ", h->len);
			printf("%s", h->str);

		}
		printf("\n");
		h = h->next;
		num_nodes++;
	}
	return (num_nodes);
}
