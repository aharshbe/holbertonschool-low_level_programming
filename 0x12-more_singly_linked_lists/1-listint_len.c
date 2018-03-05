#include "lists.h"

/**
 * listint_len - prints the length of the list
 * @h: linked list to be operated on
 *
 * Return: Always 0.
 */
size_t listint_len(const listint_t *h)
{
	int num_nodes = 0;

	while (!(!h))
	{
		h = h->next;
		num_nodes++;
	}

	return (num_nodes);
}
