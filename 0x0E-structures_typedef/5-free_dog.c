#include "main.h"
#include "dog.h"

/**
 * free_dog - let the dogs out
 * @d: pointer to record of dog
 * Return: no value
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name != NULL)
	{
		free(d->name);
	}
	if (d->owner != NULL)
	{
		free(d->owner);
	}
	free(d);
}
