#include "lists.h"

/**
 * pop_listint - delete head node and return its data
 * @head: linked list to be operated on
 *
 * Return: Always 0.
 */
int pop_listint(listint_t **head)
{
	listint_t *current_node;
	int val = 0;

	if (!(!*head))
	{
		current_node = *head;
		*head = ((*head))->next;
		val = current_node->n;
		free(current_node);
	}

	return (val);

}
