#include "dog.h"
#define <stdlib.h>

/**
 * init_dog - Initialize a stuct, dog
 * @d: The Dog
 * @name: Name of dog
 * @age: age of dog
 * @owner: name of dog's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
