#ifndef DOG_H
#define DOG_H
#include "main.h"

/**
 * struct dog - stores dog information
 * @name: name of dog
 * @age: age of dog
 * @owner: name of dog owner
 *
 * Description: will also contain functions
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
