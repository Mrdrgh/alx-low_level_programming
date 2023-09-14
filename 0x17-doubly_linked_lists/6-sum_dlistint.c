#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the elements of a dlist
 * @head: the head of the list
 * Return:  the sum
*/

int sum_dlistint(dlistint_t *head)
{
	int count = 0;

	if (!head)
		return (count);
	while (head)
	{
		head = head->next;
		count++;
	}
	return (count);
}
