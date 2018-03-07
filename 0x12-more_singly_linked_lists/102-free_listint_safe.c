#include "lists.h"

/**
 * free_listint_safe - free safe version
 * @h: linked list to be operated on
 *
 * Return: Always 0.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0, store = 0;
	listint_t *to_free, *second;

	second = to_free = *h;

	while (!(!to_free))
	{
		count = 0;
		while (count < store)
		{
			if (to_free == second)
			{
				*h = NULL;
				return (store);
			}
			count++;
			second = second->next;
		}
		second = *h;
		free(to_free);
		store++;
		to_free = to_free->next;
	}
	*h = NULL;
	return (store);
}
