#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a node at index
 * @head: the list
 * @idx: the index
 * @n: the value of the node
 * Return: the address of the new node or NULL if failed
 * if idx is not possible, return NULL
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = malloc(sizeof(listint_t)), *curr = *head, *temp;

	if (!new)
		return (NULL);
	while (curr && idx)
	{
		idx--;
		temp = curr;
		curr = curr->next;
	}
	if (idx && !curr)
	{
		return (NULL);
	}
	temp->next = new;
	new->n = n;
	new->next = curr;
	return (new);
}
