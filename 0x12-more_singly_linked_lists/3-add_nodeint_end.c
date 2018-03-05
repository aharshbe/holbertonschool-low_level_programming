#include "lists.h"

/**
 * add_nodeint_end - add new node at end  of list
 * @head: linked list to be operated on
 * @n: the number to add to member n in noie
 *
 * Return: Always 0.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *current_node;

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	current_node = *head;

	if (!(!*head))
	{
		while (current_node->next != NULL)
			current_node = current_node->next;
		current_node->next = new_node;
	}
	else
		*head = new_node;

	return (new_node);
}
