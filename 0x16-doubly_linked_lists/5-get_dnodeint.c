#include "lists.h"
/**
 * get_dnodeint_at_index - get node at given index
 * @head: head of ddl list
 * @index: node to get based on index
 * Return: the address of found node or null if not found
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t i = 0;

	if (!head)
		return (NULL);

	for ( ; head && i < index; head = head->next, i++)
	  ;
	return (head);
}
