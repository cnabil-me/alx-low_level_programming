#include "dog.h"
#include <stdlib.h>

/**
 * find_strlen - find length of string
 * @str: the string
 * Return: int length
 */

int find_strlen(const char *str)
{
	int length = 0;

	while (*str++)
		length++;
	return (length);
}

/**
 * copy_str - copy a string from @src to @dest:
 * @src: string source
 * @dest: string distination
 * Return: Pointer to @dest
 */

char *copy_str(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - copy new dog
 * @name: dog name
 * @age: new age
 * @owner: new owner
 * Return: dog_t pointer otherwize NULL.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);

	dog = (dog_t *)malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (find_strlen(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (find_strlen(owner) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = copy_str(dog->name, name);
	dog->owner = copy_str(dog->owner, owner);
	dog->age = age;
	return (dog);
}

