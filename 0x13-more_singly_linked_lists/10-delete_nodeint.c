#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node
 * @head: the list
 * @index: the index to delete
 * Return: 1 if succeed , 0 if not
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *curr = *head;

	if (!*head)
		return (-1);
	if (!index)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
		return (1);
	}
	while (curr && index)
	{
		temp = curr;
		curr = curr->next;
		index--;
	}
	if (!index && curr) {
		temp->next = curr->next;
		free(curr);
		return (1);
	} else {
		return (-1);
	}
}

