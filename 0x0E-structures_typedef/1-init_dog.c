#include "main.h"
#include "dog.h"

/**
 * init_dog - get data on dog
 * @d: memory location of structure
 * @name: name of dog
 * @age: age of dog
 * @owner: name of dog owner
 * Return: no value
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
