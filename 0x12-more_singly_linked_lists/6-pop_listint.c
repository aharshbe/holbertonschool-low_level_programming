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
	int _val = 0;

	current_node = *head;

	if (!(current_node))
	{
		current_node = current_node->next;
		_val = current_node->n;
		free(current_node);
		return (return_val);
	}

	return (_val);

}
