#include "lists.h"
#include <string.h>
/**
 * free_list - return num of  elemnets in linked list
 * @head: head of list
 *
 * Return: Always 0.
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
