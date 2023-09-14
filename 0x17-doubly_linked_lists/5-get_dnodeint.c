#include "lists.h"

/**
 * get_dnodeint_at_index - gets a dnode based on an index
 * @head: the head of the dlist
 * @index: the index of the dnode
 * Return: the address of the dnode , or NULL if none was found
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;

	if (!head)
		return (NULL);
	current = head;
	while (current && index)
	{
		current = current->next;
		index--;
	}
	return ((index) ? NULL : current);
}
