#include "lists.h"
/**
 * free_listint2 - frees a list but its a pointer to pointer
 * @head: the pointer to list
*/
void free_listint2(listint_t **head)
{
	listint_t  *temp;

	if (!head)
		return;
	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
