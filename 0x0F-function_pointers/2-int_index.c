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
	if (size > 0)
	{
		unsigned int i;

		for (i = 0; i < size; i++)
		{
			if (cmp(array[size]))
			{
				return (cmp(array[size]));
			}
		}
	}

	return (-1);
}

