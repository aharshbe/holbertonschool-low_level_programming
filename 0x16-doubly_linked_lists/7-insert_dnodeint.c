#include "lists.h"
/**
 * insert_dnodeint_a_index - insert node at given index
 * @h: head of ddl list
 * @idx: index to insert at
 * @n: member for new node
 * Return: the address of new node or null if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	size_t i = 1;

	if (!h)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;

	if (!idx || !*h)
	{
		new = add_dnodeint(h, n);
		return (new);
	}

	for ( ; *h; *h = (*h)->next, i++)
	{
		if ((*h)->next && i == idx)
		{
			new->prev = *h;
			new->next = (*h)->next;
			(*h)->next = new;
			return (new);
		}
	}
	new = add_dnodeint_end(h, n);
	return (new);
}
