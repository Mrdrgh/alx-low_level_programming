#include "lists.h"
/**
 * add_nodeint_end - adds a node in the end
 * @head: the list
 * @n: the value of the node
 * Return: the address of the updated list
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t)), *curr = *head;

	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (!*head)
	{
		*head = new;
		return (new);
	}
	while (curr->next)
		curr = curr->next;
	curr->next = new;
	return (*head);
}
