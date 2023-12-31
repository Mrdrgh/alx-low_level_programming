#include "lists.h"
/**
 * free_list - frees a list
 * @head: the list to free
*/
void free_list(list_t *head)
{
	list_t *curr = head, *temp;

	temp = curr;
	while (curr)
	{
		temp = curr;
		curr = curr->next;
		free(temp->str);
		free(temp);
	}
}
