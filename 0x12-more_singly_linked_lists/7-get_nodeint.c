#include "lists.h"

/**
 * get_nodeint_at_index - get a particular node
 * @head: linked list to be operated on
 * @index: node to be retrieved
 *
 * Return: Always 0.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int index_count = 0;

	while (!(!head))
	{
		if (index == index_count)
			break;
		head = head->next;
		index_count++;
	}

	if (index_count != index)
		return (NULL);

	return (head);
}
