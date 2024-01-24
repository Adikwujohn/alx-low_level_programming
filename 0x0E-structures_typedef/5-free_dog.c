#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
typedef struct
{
	char *name;
	float age;
	char *owner;
}
dog_t;
void free_dog(dog_t *d)
{
	if (d != NULL)
{
	free(d->name);
	free(d->owner);
	free(d);
}
}
