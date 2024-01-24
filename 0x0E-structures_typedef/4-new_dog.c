#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - function that creates a new dog
 * Return: always NULL if not equal to and d if true
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */
dog_t *new_dog(char *name, float age, char *owner)

{
	dog_t *d;

	if (!name || !owner)
		return (NULL);
	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);
	d->name = strdup(name);
	d->owner = strdup(owner);
	if (!d->name || !d->owner)
{
	free(d->name);
	free(d->owner);
	free(d);
	return (NULL);
}
d->age = age;
return (d);
}

