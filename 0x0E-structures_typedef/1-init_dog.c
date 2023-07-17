#include "dog.h"
/**
*init_dog - itializes a struct
*@d: a struct of dog
*@name: the name of dog
*@age: the age
*@owner: the owner
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		d = malloc(sizeof(struct dog));

	d.name = name;
	d.age = age;
	d.owner = owner;
}
