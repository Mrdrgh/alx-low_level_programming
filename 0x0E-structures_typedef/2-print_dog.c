#include "dog.h"
#include <stdio.h>
/**
*print_dog - prints the struct if null print nil
*@d: the struct
*/
void print_dog(struct dog *d)
{
	if (!d)
		exit(98);

	printf("Name: %s\nAge: %f\nOwner: %s\n", (d->name) ? d->name : "nil",
			(d->age) ? d->age : "nil",
			(d->owner) ? d->owner : "nil");
}
