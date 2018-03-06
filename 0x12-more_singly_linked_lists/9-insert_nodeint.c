#include "lists.h"

/**
 * insert_nodeint_at_index - add new node at position
 * @head: linked list to be operated on
 * @idx: position to add new node at
 * @n: value for new node member n
 *
 * Return: Always 0.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current_node, *node_before;
	unsigned int index = 0;

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (!head)
		return (NULL);

	if (!idx)
	{
		new_node->next = *head;
		*head = new_node;
		free(*head);
		return (new_node);
	}

	current_node = *head;

	while (!(!current_node))
	{
		if (idx == index)
		{
			node_before = current_node->next;
			current_node->next = new_node;
			new_node->next = node_before;
			break;
		}
		index++;
		current_node = current_node->next;
	}

	if (idx != index)
		return (NULL);

	return (new_node);
}
