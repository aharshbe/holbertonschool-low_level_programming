#include "lists.h"

/**
 * free_listint2 - free nodes and set head to NULL
 * @head: linked list to be operated on
 *
 * Return: Always 0.
 */
void free_listint2(listint_t **head)
{
	listint_t *current_node;

	current_node = *head;

	while (!(!current_node))
	{
		free(current_node);
		current_node = current_node->next;
	}
	*head = NULL;
}
