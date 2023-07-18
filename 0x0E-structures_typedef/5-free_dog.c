#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free dog struct
 * @d: dog pointer
 * Return: void.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

