#include "lists.h"

/**
 * dlistint_len - returns the len of a doubly linked list
 * @h: supposedly the head of the list, we'll make sure it is
 *
 * Return: the len of the list
*/

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;
	const dlistint_t *current;

	if (!h)
		return (count);
	current = h;
	while (current->prev)
		current = current->prev;
	while (current)
	{
		current = current->next;
		count++;
	}
	return (count);
}
