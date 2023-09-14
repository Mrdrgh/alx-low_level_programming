#include "lists.h"

/**
 * add_dnodeint_end - adds a dnode at the end of a dlist
 * @head: the head of the list
 * @n: the value of the new node
 * Return: the address of the newly created element or null if fail
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_dnode = malloc(sizeof(dlistint_t));

	if (!new_dnode)
		return (NULL);
	new_dnode->n = n;
	new_dnode->next = NULL;
	if (!*head)
	{
		new_dnode->prev = *head;
		*head = new_dnode;
		return (new_dnode);
	}
	while ((*head)->next)
		*head = (*head)->next;
	(*head)->next = new_dnode;
	new_dnode->prev = *head;
	return (new_dnode);
}
