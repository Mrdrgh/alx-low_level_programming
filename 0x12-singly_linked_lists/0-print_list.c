#include "lists.h"
/**
 * print_list - prints a list of nodes
 * @h: the list
 * Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
	const list_t *current = h;
	size_t nodes_nbr = 0;

	for (; current; current = current->next)
	{
		if (current->str)
		{
			printf("[%d] %s\n", current->len, current->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		nodes_nbr++;
	}
	return (nodes_nbr);
}
