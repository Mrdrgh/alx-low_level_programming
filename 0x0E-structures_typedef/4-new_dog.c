#include "dog.h"
/**
*new_dog - creates a nuw struct of dog
*@name: the name
*@age: the new age
*@owner: the owner of this new dog (structure)
*Return: this struct NULL if fail
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new = malloc(sizeof(dog_t));

	if (!new)
		return (NULL);

	new->name = name;
	new->owner = owner;
	new->age = age;
}

