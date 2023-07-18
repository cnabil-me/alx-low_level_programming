#include "dog.h"

/**
 * init_dog - initialize dog struct
 * @d: pointer to a dog struct
 * @name: new name
 * @age: new age
 * @owner: new owner name
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

