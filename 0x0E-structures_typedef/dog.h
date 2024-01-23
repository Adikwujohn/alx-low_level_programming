#ifndef DOG_H
#define DOG_H

/**
 * struct dog - defines new type struct dog
 * @name: first member
 * @age: second member.
 * @owner: third member
 * struct dog - structure dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
