#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints name of struct dog
 * @d: pointer to the struct dog
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
{
	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
	printf("age: %f\n", (d->age != -1.0) ? d->age : 0.0);
}
}
