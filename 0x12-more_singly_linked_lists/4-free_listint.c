#include "lists.h"

/**
 * free_listint - add new node at end  of list
 * @head: linked list to be operated on
 *
 * Return: Always 0.
 */
void free_listint(listint_t *head)
{
	while (!(!head))
	{
		free(head);
		head = head->next;
	}
}
