#include "lists.h"
/**
 * print_listint_safe - prints a list of nodes
 * @head: the list
 * Return: the number of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head;
	size_t i = 0;

	if (!head)
	{
		exit(98);
	}
	while (current)
	{
		i++;
		printf("[%p] %d\n", (void*) current, current->n);
		current = current->next;
	}
	return (i);
}
