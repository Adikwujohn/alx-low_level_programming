#include "dog.h"
#include <stdio.h>
/**
 * init_dog - initializes a struct dog
 * @name: name of the dog
 * @owner: owner of the dog
 * @d: pointer to the struct dog
 * @age: age of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}}
