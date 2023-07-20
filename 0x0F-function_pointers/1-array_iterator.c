#include "function_pointers.h"

/**
 * array_iterator - appy action while mapping array
 * @array: array to map
 * @size: size of array
 * @action: function to apply
 * Return: Void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *last = array + size - 1;

	if (array && size && action)
		while (array <= last)
			action(*array++);
}

