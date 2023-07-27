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
 * add_node - adds a node in the beggining of a list
 * @head: the list
 * @str: the string to add to the list
 * Return: the address of the new node (the head of list)
*/
list_t *add_node(list_t **head, const char *str)
{
	char *new_str = (char*) strdup(str);
	list_t *new_node = malloc(sizeof(list_t));

	if (!new_node)
	{
		return (NULL);
	}
	if (!new_str)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = _str_len(new_str);
	new_node->str = new_str;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
