#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - copy new dog
 * @name: dog name
 * @age: new age
 * @owner: new owner
 * Return: dog_t pointer otherwize NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_pointer;
	int i, len_name, len_owner;

	dog_pointer = malloc(sizeof(*dog_pointer));

	if (dog_pointer == NULL || !(name) || !(owner))
	{
		free(dog_pointer);
		return (NULL);
	}

	for (len_name = 0; name[len_name]; len_name++)
		;

	for (len_owner = 0; owner[len_owner]; len_owner++)
		;

	dog_pointer->owner = malloc(len_owner + 1);
	dog_pointer->name = malloc(len_name + 1);

	if (!(dog_pointer->name) || !(dog_pointer->owner))
	{
		free(dog_pointer->name);
		free(dog_pointer->owner);
		free(dog_pointer);
		return (NULL);
	}

	for (i = 0; i < len_name; i++)
	{
		dog_pointer->name[i] = name[i];
	}
	dog_pointer->name[i] = '\0';
	dog_pointer->age = age;

	for (i = 0; i < len_owner; i++)
	{
		dog_pointer->owner[i] = owner[i];
	}
	dog_pointer->owner[i] = '\0';
	return (dog_pointer);
}

