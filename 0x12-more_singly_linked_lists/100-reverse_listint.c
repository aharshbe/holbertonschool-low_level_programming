#include "lists.h"

/**
 * reverse_listint - delete head node and return its data
 * @head: linked list to be operated on
 *
 * Return: Always 0.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current_node = *head, *next_node, *previous_node = NULL;

	while (!(!current_node))
	{
		next_node = current_node->next;
		current_node->next = previous_node;
		previous_node = current_node;
		current_node = next_node;
	}
	*head = previous_node;
	return (previous_node);
}
