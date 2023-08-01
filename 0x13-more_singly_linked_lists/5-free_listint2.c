#include "lists.h"
/**
 * free_listint2 - frees a list but its a pointer to pointer
 * @head: the pointer to list
*/
void free_listint2(listint_t **head)
{
	listint_t *curr = *head, *temp;

	if (!head)
		return;
	while (curr)
	{
		temp = curr;
		curr = curr->next;
		free(temp);
	}
	free(curr);
	curr = NULL;
}
