#include "lists.h"

/**
 * check_cycle - check for circular linked list
 * @list: head of the linked list
 * Return: 1 if circular, 0 if not
 */
int check_cycle(listint_t *list)
{
	listint_t *current = NULL;

	current = list;

	while (current)
	{
		if (current->next == list)
			return (1);
		current = current->next;
	}

	return (0);
}
