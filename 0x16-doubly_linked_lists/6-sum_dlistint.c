#include "lists.h"
/**
 * sum_dlistint - add all members of nodes
 * @head: head of ddl list
 * Return: total number of added members
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	for ( ; head; head = head->next)
		sum += head->n;
	return (sum);
}
