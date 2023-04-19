#include <stdio.h>
#include "dog.h"

int main(void)
{
	struct dog d;

	d.name = "Poppy";

	d.age = 3.5;

	d.owner = "Bob";

	print_dog(&d);
	return (0);
}
