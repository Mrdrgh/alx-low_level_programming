#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: the head of the list, supposedly not null
*/

void free_dlistint(dlistint_t *head)
{
	if (!head)
		return;
	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
