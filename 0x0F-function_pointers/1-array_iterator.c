#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - appy action while mapping array
 * @array: array to map
 * @size: size of array
 * @action: function to apply
 * Return: Void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}

