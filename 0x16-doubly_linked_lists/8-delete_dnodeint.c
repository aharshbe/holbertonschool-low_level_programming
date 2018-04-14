#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node at given index
 * @head: head of ddl list
 * @index: index to insert at
 * Return: 1 if success -1 if fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *old;
	size_t i = 0;

	if (!head || !*head)
		return (-1);
	old = *head;

	if (!index)
	{
		*head = old->next;
		if (!(!*head))
			(*head)->prev = NULL;
		free(old);
		return (1);
	}

	for ( ; head && old && i < index; old = old->next, i++)
		;
	if (!old || index > i)
		return (-1);
	old->prev->next = old->next;

	if (!(!old->next))
		old->next->prev = old->prev;
	free(old);
	return (1);
}
