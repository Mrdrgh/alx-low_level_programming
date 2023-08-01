#include "lists.h"
/**
 * print_listint_safe - prints a list of nodes
 * @head: the list
 * Return: the number of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow, *fast;
	size_t i = 0;

	if (!head)
	{
		exit(98);
	}
	slow = fast = head;
	while (slow && fast && fast->next)
	{
		printf("[%p] %d\n", (void*)slow, slow->n);
		i++;
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			printf("-> [%p] %d\n", (void *)slow, slow->n);
			exit(98);
		}
	}
	while (slow)
	{
		printf("[%p] %d\n", (void*)slow, slow->n);
		slow = slow->next;
		i++;
	}

	return (i);
}
