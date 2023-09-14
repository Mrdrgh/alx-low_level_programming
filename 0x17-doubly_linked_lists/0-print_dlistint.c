#include "lists.h"

/**
 * print_dlistint - prints the values of doubly linked list
 * @h: the head of the list
 * Return: the number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t num = 0;
	dlistint_t *current;

	if (!h)
	{
		return (num);
	}
	current = h;
	while (current)
	{
		printf("%d", current->n);
		num++;
		current = current->next;
	}
	return (num);
}
