#include "lists.h"

size_t listint_len(const listint_t *h);

/**
 * print_listint_safe - print the list in safe
 * @head: linked list to be operated on
 *
 * Return: Always 0.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	int i = 0, store = 0;
	const listint_t *to_print;

	while (!(!head))
	{
		to_print = head;
		store = head->n;
		if (store == head->n)
		{
			while (i < 8)
			{
				printf("[%p] %d\n", (void *)head, head->n);
				head = head->next;
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
