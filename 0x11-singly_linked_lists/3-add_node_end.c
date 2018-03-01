#include "lists.h"
#include <string.h>
/**
 * add_node_end - return num of  elemnets in linked list
 * @head: head of list
 * @str: string to be added to head
 *
 * Return: Always 0.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int size = 0;

	list_t *new_node, *current_node;

	new_node = malloc(sizeof(list_t));
	current_node = *head;

	if (!new_node)
		return (NULL);

	while (str[size] != '\0')
		size++;

	new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = size;

	if (*head != NULL)
	{
		while (current_node->next != NULL)
		{
			current_node = current_node->next;
		}
		current_node->next = new_node;
		new_node->next = NULL;
	}
	else
	{
		*head = new_node;
		new_node->next = NULL;
	}
	return (new_node);
}
