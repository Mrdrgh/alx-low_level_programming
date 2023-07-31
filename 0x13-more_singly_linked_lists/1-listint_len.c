#include "lists.h"
/**
 * listint_len - lisst the len of list
 * @h: the list
 * Return: the numebr of nodes of h
*/
size_t listint_len(const listint_t *h)
{
	const listint_t *curr = h;
	size_t i = 0;

	while (curr)
	{
		i++;
		curr = curr->next;
	}
	return (i);
}
