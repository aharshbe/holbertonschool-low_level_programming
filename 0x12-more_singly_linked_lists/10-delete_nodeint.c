#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at given index
 * @head: linked list to be operated on
 * @index: position to add new node at
 *
 * Return: Always 0.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node, *tmp, *place_holder;
	unsigned int index_count = 1;

	if (!*head)
		return (-1);

	current_node = *head;

	if (!index)
	{
		tmp = *head;
		current_node = current_node->next;
		free(tmp);
		*head = current_node;
		return (1);
	}
	
	while (!(!current_node->next))
	{
		if (index_count == index)
		{
			tmp = current_node;
			break;
		}
		index_count++;
		current_node = current_node->next;
	}


	if (index != index_count)
		return (-1);
	else
	{
		free(current_node->next);
		place_holder = tmp->next;
		tmp->next = place_holder->next;
		return (1);
	}
	return (-1);
}
