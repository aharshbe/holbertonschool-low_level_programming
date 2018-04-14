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
	dlistint_t *new, *old;
	size_t i = 0;

	if (!h)
		return (NULL);
	old = *h;

	if (!idx)
	{
		new = add_dnodeint(h, n);
		return (new);
	}

	for ( ; old && i < idx; i++, old = old->next)
		;

	if (!old && i == idx)
	{
		new = add_dnodeint_end(h, n);
		return (new);
	}

	if (!(!old))
	{
		new = malloc(sizeof(dlistint_t));
		if (!new)
			return (NULL);
		new->n = n;
		old->prev->next = new;
		new->prev = old->prev;
		old->prev = new;
		new->next = old;
		return (new);
	}

	return (NULL);
}
