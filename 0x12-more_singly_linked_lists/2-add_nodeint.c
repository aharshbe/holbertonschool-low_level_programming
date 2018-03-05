#include "lists.h"

/**
 * add_nodeint - prints the length of the list
 * @head: linked list to be operated on
 * @n: the number to add to member n in noie
 *
 * Return: Always 0.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
