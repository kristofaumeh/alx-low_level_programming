#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
* print_dog - print the struct of dog
* @d: the new dog
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
	printf("Age: %f\n", d->age >= 0 ? d->age : (float)0);
	printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
}
