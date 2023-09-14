#include "lists.h"

/**
 * add_dnodeint_end - adds a dnode at the end of a dlist
 * @head: the head of the list
 * @n: the value of the new node
 * Return: the address of the newly created element or null if fail
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current, *new_dnode = malloc(sizeof(dlistint_t));

	if (!new_dnode)
		return (NULL);
	new_dnode->n = n;
	new_dnode->next = NULL;
	if (!*head)
	{
		*head = new_dnode;
		return (new_dnode);
	}
	current = *head;
	while (current)
		current = current->next;
	current->next = new_dnode;
	new_dnode->prev = current;
	return (new_dnode);
}
