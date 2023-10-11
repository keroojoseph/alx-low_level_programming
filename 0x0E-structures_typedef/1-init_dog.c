#include "dog.h"

/**
 *init_dog - function
 *@name: seconed member
 *@age: third member
 *@owner: fourth member
 *@d: first member
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
