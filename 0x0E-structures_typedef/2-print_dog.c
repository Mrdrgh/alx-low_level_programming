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
	printf("Name: ");
	if (d->name == NULL)
		printf("nil\n");
	else
		printf("%s\n", d->name);
	printf("Age: ");
	printf("%f\n", d->age);
	printf("Owner: ");
	if (d->owner == NULL)
		printf("nil\n");
	else
		printf("%s\n", d->owner);
}
