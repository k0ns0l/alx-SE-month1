#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - Display information about a dog.
 * @d: Dog struct, defined
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (!d)
		return;

	if (!d->name)
		d->name = "(nil)";
	else if (!d->owner)
		d->owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
