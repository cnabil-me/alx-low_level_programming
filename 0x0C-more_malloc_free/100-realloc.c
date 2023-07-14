#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates memory
 * @ptr: pointer to the memory was  allocated.
 * @old_size: the size, in bytes
 * @new_size: new size, in bytes
 *
 * Return: pointer to the new allocated mempry.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
	}
	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}

