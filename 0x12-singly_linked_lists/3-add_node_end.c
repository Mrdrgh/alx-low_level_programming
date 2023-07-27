#include "lists.h"
/**
 * _str_len - calculates the len of string
 * @str: the string
 * Return: the numbre of chars of str
*/
unsigned int _str_len(const char *str)
{
	const char *p = str;
	unsigned int len = 0;

	while (*p)
	{
		p++;
		len++;
	}
	return (len);
}

/**
 * add_node_end - adds a node to the end
 * @head: the head
 * @str: the string to put into the new node
 * Return: NULL if error , address of node if none
*/
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len;
	list_t *curr = *head;
	list_t *new_node = malloc(sizeof(list_t));

	len = _str_len(str);
	if (!new_node)
		return (NULL);

	new_node->next = NULL;
	new_node->str = strdup(str);
	new_node->len = len;
	if (!*head)
	{
		*head = new_node;
		return (new_node);
	}
	while (curr->next)
	{
	curr = curr->next;
	}
	curr->next = new_node;
	return (*head);
}
