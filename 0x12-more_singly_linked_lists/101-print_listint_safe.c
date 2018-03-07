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
	size_t count = 0, store = 0;
	const listint_t *to_print, *second;

	second = to_print = head;

	while (!(!to_print))
	{
		count = 0;
		while (count < store)
		{
			if (to_print == second)
			{
				printf("[%p] %d\n", (void *)to_print, to_print->n);
				return (store);
			}
			count++;
			second = second->next;
		}
		second = head;
		printf("[%p] %d\n", (void *)to_print, to_print->n);
		store++;
		to_print = to_print->next;
	}
	return (store);
}
