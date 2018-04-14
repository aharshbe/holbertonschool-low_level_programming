#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node at given index
 * @head: head of ddl list
 * @index: index to insert at
 * Return: 1 if success -1 if fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *old_man;
	size_t i = 0;

	if (!head || !*head)
		return (-1);
	old_man = *head;

	if (!index)
	{
		*head = old_man->next;
		if (!(!*head))
			(*head)->prev = NULL;
		free(old_man);
		return (1);
	}

	for ( ; head && old_man && i < index; old_man = old_man->next, i++)
		;
	if (!old_man || index > i)
		return (-1);
	old_man->prev->next = old_man->next;

	if (!(!old_man->next))
		old_man->next->prev = old_man->prev;
	free(old_man);
	return (1);
}
