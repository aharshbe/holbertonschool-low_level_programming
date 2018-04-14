#include "lists.h"
/**
 * print_dlistint - Short description, single line
 * @h: head of ddl list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t size = 0;

	for (; h; h = h->next, size++)
		printf("%d\n", h->n);
	return (size);
}
