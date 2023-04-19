#include "main.h"
#include "dog.h"

/**
 * print_dog - creates a struct called dog
 * @d: dog information
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}
	if (d->age < 0)
	{
		printf("(nil)");
	}
	else
	{
		printf("Age: %6f\n", d->age);
	}
	if (d->owner == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}

