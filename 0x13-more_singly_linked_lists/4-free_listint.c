#include "lists.h"
/**
 * free_listint - frees a list of ints
 * @head: the list
*/
void free_listint(listint_t *head)
{
	listint_t *temp, *curr = head;

	while (curr)
	{
		temp = curr;
		curr = curr->next;
		free(temp);
	}
	free(curr);
}
