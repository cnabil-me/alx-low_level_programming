#include "function_pointers.h"

/**
 * int_index - find index
 * @array: array to map
 * @size: size of array
 * @cmp: function to search
 * Return: Void
 */
int int_index(int *array, int size, int (*cmp)(int))
{

	if (array && size && cmp)
		for (size_t i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}

	return (-1);
}

