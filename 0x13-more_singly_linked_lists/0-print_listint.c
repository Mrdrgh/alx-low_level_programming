#include "lists.h"
/**
 * print_listint - prints a list of ints
 * @h: the list
 * Return: the number of nodes
*/
size_t print_listint(listint_t *h)
{
	listint_t *current = h;
	size_t i = 0;

	while (current)
	{
		printf("%d\n", current->n);
		i++;
	}
	return (i);
}

