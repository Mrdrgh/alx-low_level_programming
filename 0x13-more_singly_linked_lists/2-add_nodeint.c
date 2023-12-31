#include "lists.h"
/**
 * add_nodeint - adds a node at the beginning of listint_t
 * @head: the list
 * @n: the value of the node
 * Return: the address of the new element , NULL if fails
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
