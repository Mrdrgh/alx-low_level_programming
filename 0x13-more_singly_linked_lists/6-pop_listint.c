#include "lists.h"
/**
 * pop_listint - pops the head of listint
 * @head: the list
 * Return: the int value of the popped head
*/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int nn;

	if (!head || !*head)
		return (0);
	temp = (*head)->next;
	nn = (*head)->n;
	free(*head);
	*head = temp;
	return (nn);
}
