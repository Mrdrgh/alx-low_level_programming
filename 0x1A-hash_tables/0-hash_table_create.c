#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a hash table
 * @size: the size of the hash table
 * Return: the newly created hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = malloc(sizeof(hash_table_t));
	unsigned long int i = 0;

	if (!new_table)
		return (NULL);
	new_table->size = size;
	new_table->array = malloc(sizeof(hash_node_t *) * size);
	if (!(new_table->array))
		return (NULL);
	for (i = 0; i < size; i++)
	{
		new_table->array[i] = NULL;
	}
	return (new_table);
}
