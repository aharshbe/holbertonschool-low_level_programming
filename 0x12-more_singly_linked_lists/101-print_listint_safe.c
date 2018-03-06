#include "lists.h"

size_t listint_len(const listint_t *h);

/**
 * reverse_listint - delete head node and return its data
 * @head: linked list to be operated on
 *
 * Return: Always 0.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	int i = 0, store = 0;
	listint_t *to_print;

	to_print = malloc(sizeof(listint_t));

	if (!to_print)
		return (98);

	while(!(!head))
	{
		to_print->n = head->n;
		to_print->next = head->next;
		store = to_print->n;
		if (store == to_print->n)
		{
			while (i < 8)
			{
				printf("[%p] %d\n", (void *)to_print, to_print->n);
				to_print = to_print->next;
				i++;
			}
			break;
		}
		printf("[%p] %d\n", (void *)to_print, to_print->n);
		head = to_print->next;
		count++;
	}
	return (count);
}
