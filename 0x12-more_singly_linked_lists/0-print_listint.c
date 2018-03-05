#include "lists.h"

/**
 * print_listint - prints all the elements in the list
 * @h: linked list to be operated on
 *
 * Return: Always 0.
 */
size_t print_listint(const listint_t *h)
{
	int num_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num_nodes++;
	}

	return (num_nodes);
}
