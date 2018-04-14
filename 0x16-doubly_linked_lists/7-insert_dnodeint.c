#include "lists.h"
/**
 * insert_dnodeint_at_index - insert node at given index
 * @h: head of ddl list
 * @idx: index to insert at
 * @n: member for new node
 * Return: the address of new node or null if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	size_t i = 0;

	if (!h)
		return (NULL);

	if (!idx)
	{
		new = add_dnodeint(h, n);
		return (new);
	}

	for ( ; *h && i < idx; i++, *h = (*h)->next)
		;

	if (!h && i == idx)
	{
		new = add_dnodeint_end(h, n);
		return (new);
	}

	if (!(!*h))
	{
		new = malloc(sizeof(dlistint_t));
		if (!new)
			return (NULL);
		new->n = n;
		(*h)->prev->next = new;
		new->prev = (*h)->prev;
		(*h)->prev = new;
		new->next = *h;
		return (new);
	}

	return (NULL);
}
