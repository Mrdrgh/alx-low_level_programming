#include "hash_tables.h"

/**
 * hash_table_set - sets a given hash_table based on the key, and then give it
 * a value
 * @ht: the hash table
 * @key: the key to where store the value of the key
 * @value: the value of the key
 * Return: 1 on success , 0 on fail
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	char *value_cp;
	unsigned long int index, i;

	if (!ht || !key || key == '\0' || !value || (value_cp = strdup(value)))
		return (0);
	index = key_index(key, ht->size);
	for (i = index; i < ht->size; i++)	
	{
		if (!strcmp(ht->array[i]->key, key))
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_cp;
			return (1);
		}
	}
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
	{
		free(value_cp);
		return (0);
	}
	if (!(new_node->key = strdup(key)))
		return (0);
	new_node->value = value_cp;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}