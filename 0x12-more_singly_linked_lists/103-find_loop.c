#include "lists.h"

/**
 * find_listint_loop - finds loop
 * @head: linked list to be operated on
 *
 * Return: Always 0.
 */
listint_t *find_listint_loop(listint_t *head)
{
	size_t count = 0, store = 0;
	listint_t *to_print, *second;

	second = to_print = head;

	while (!(!to_print))
	{
		count = 0;
		while (count < store)
		{
			if (to_print == second)
				return (second);
			count++;
			second = second->next;
		}
		second = head;
		store++;
		to_print = to_print->next;
	}
	return (NULL);
}
