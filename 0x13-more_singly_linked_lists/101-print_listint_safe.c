#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *the_slow_bih, *hare;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	the_slow_bih = head->next;
	hare = (head->next)->next;

	while (hare)
	{
		if (the_slow_bih == hare)
		{
			the_slow_bih = head;
			while (the_slow_bih != hare)
			{
				nodes++;
				the_slow_bih = the_slow_bih->next;
				hare = hare->next;
			}

			the_slow_bih = the_slow_bih->next;
			while (the_slow_bih != hare)
			{
				nodes++;
				the_slow_bih = the_slow_bih->next;
			}

			return (nodes);
		}

		the_slow_bih = the_slow_bih->next;
		hare = (hare->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nbr_of_nodes, index = 0;

	nbr_of_nodes = looped_listint_len(head);

	if (nbr_of_nodes == 0)
	{
		for (; head != NULL; nbr_of_nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nbr_of_nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nbr_of_nodes);
}
