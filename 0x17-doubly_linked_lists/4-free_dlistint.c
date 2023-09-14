#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: the head of the list, supposedly not null
*/

void free_dlistint(dlistint_t *head)
{
	while (head->prev)
		head = head->prev;
	while (head->next)
	{
		if (head->prev)
			free(head->prev);
		head = head->next;
	}
	free(head);
}
