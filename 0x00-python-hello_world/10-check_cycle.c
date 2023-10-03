#include "lists.h"

/**
 * check_cycle - checks if a linked list contains a cycle
 * @list: pointer to linked list head
 * Return: 1 if the list has a cycle, 0 if it doesn't
 */
int check_cycle(listint_t *list)
{
	listint_t *current = list;
	listint_t *lookup = list;

	if (!list)
		return (0);

	while (current && lookup && lookup->next)
	{
		current = current->next;
		lookup = lookup->next->next;
		if (current == lookup)
			return (1);
	}

	return (0);
}
