#include "lists.h"

/**
 * add_dnodeint - adds a double node in the head of the list
 * @head: the supposed head of the dlist, we'll edge case on it
 * @n: the value of the new node
 *
 * Return: the address of the newly created dnode, or null if fail
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_dnode = malloc(sizeof(dlistint_t));

	if (!new_dnode)
		return (NULL);

	new_dnode->n = n;
	new_dnode->prev = NULL;

	if (!*head)
	{
		new_dnode->next = *head;
		*head = new_dnode;
		return (new_dnode);
	}
	while ((*head)->prev)
		head = &(*head)->prev;
	(*head)->prev = new_dnode;
	new_dnode->next = (*head);
	*head = new_dnode;
	return (new_dnode);
}
