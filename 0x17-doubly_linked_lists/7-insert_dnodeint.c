#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a dnode (double node) at an index
 * @h: the supposed head of the list
 * @idx: the index
 * @n: the value of the newly created node
 * Return: the new node or a null if captain somting wong
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current, *temp, *new_dnode = malloc(sizeof(dlistint_t));

	if (!new_dnode)
		return (NULL);
	if (!*h && idx)
		return (NULL);
	if (!*h)
	{
		free(new_dnode);
		return (add_dnodeint(&h, n));
	}

	new_dnode->n = n;
	while ((*h)->prev)
		*h = (*h)->prev;
	current = *h;
	while (current && idx)
	{
		temp = current;
		current = current->next;
	}
	if (!current && idx)
		return (NULL);
	temp->next = new_dnode;
	new_dnode->prev = temp;
	current->prev = new_dnode;
	new_dnode->next = current;
	return (new_dnode);
}
