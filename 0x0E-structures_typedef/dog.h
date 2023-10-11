#ifndef DOG_H
#define DOG_H

/**
 *struct dog - struct
 *@name: member name of dog
 *@age: member two
 *@owner: owner the dog
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
