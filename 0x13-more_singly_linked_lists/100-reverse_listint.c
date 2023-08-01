#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list
 * @head: double pointer to the head of the list
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *preeev = NULL, *neeext = NULL;

	while (*head)
	{
	neeext = (*head)->next;
	(*head)->next = preeev;
	preeev = *head;
	*head = neeext;
	}
	*head = preeev;
	return (*head);
}
