#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - function that initializes a variable
 * @d: the dog
 * @name: the first number
 * @age: the third nmber
 * @owner: the last number
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}

