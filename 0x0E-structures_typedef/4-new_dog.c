#include "dog.h"
/**
 * _strlen - the length of a string
 * @str: the string
 * Return: its length
*/
int _strlen(char *str)
{
	int i = 0;
	char *p = str;

	if (!str)
		return (0);
	while (*p)
	{
		i++;
		p++;
	}
	return (i);
}
/**
 * _strcpy - copies a string into another
 * @s1: the first string
 * @s2: the second one
 * Return: s1
*/
char *_strcpy(char *s1, char *s2)
{
	char *p = s1;
	char *q = s2;

	while (*p)
		p++;
	while (*q)
	{
		*p = *q;
		p++;
		q++;
	}
	*p = '\0';
	return (s1);
}
/**
*new_dog - creates a nuw struct of dog
*@name: the name
*@age: the new age
*@owner: the owner of this new dog (structure)
*Return: this struct NULL if fail
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	int len_name = 0, len_owner = 0;

	new = malloc(sizeof(dog_t));
	if (!new)
		return (NULL);
	len_name = _strlen(name);
	len_owner = _strlen(owner);
	new->name = malloc(sizeof(char) * (len_name + 1));
	if (!new->name)
	{
		free(new);
		return (NULL);
	}
	new->owner = malloc(sizeof(char) * (len_owner + 1));
	if (!new->owner)
	{
		free(new);
		free(new->name);
		return (NULL);
	}
	_strcpy(new->name, name);
	_strcpy(new->owner, owner);
	new->age = age;
	return (new);
}

