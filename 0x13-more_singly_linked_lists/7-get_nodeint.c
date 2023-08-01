#include "lists.h"
/**
 * get_nodeint_at_index - gets the nth indexed node
 * @head: the list
 * @index: the index of the node to get
 * Return: the address of the returned node, if not existing NULL
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	while (head && index)
	{
		index--;
		head = head->next;
	}
	return (head);
}
