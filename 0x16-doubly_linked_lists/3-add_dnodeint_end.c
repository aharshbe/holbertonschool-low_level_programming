#include "lists.h"
/**
 * add_dnodeint_end - Add a new node at the start of the list
 * @head: head of ddl list
 * @n: member for new node to add
 * Return: the address for new element or null if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *old;

	if (!head)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (!*head)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	old = *head;
	for ( ; old->next; old = old->next)
		;
	old->next = new;
	new->prev = *head;
	new->next = NULL;
	return (new);
}
