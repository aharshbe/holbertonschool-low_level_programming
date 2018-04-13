#include "lists.h"
/**
 * add_dnodeint_end - Add a new node at the start of the list
 * @head: head of ddl list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	while (head)
	{
		free(head);
		head = head->next;
	}
}
