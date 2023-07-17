#include "dog.h"
#include <stdio.h>
/**
*print_dog - prints the struct if null print nil
*@d: the struct
*/
void print_dog(struct dog *d)
{
	if (!d)
		return;
	if (!d->name)
		d->name = "(nil)";
	if (!d->owner)
		d->owner = "(nil)";
	printf("Name: ");
	printf("%s\n", d->name);
	printf("Age: ");
	printf("%f\n", d->age);
	printf("Owner: ");
	printf("%s\n", d->owner);
}
