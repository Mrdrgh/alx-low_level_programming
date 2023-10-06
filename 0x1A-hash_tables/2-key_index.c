#include "hash_tables.h"

/**
 * key_index - returns the key index to store into the hash table
 * uses the djb2 algo to set the index at which to store the value
 * @key: the key to store
 * @size: the size of the hash table
 * Return: returns the set index
*/

unsigned long int hash_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
