#include "lists.h"
/**
 * list_len - calculates the len of a list
 * @h: the list
 * Return: the number of node of this list
*/
size_t list_len(const list_t *h)
{
	size_t len = 0;
	const list_t *curr = h;

	while (curr)
	{
		curr = curr->next;
		len++;
	}
	return (len);
}
