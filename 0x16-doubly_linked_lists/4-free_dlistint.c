#include "lists.h"
/**
 * free_dlistint - free linked list
 * @head: head of ddl list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *to_free;

	while (head)
	{
		to_free = head->next;
		free(head);
		head = to_free;
	}
}
