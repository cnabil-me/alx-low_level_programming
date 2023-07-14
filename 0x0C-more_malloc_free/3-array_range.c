#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - creates an array of integers
 * @min: minimum number
 * @max: maximum number
 *
 * Description: create array of integers
 * Return:  pointer to the newly created array or NULL
 */
int *array_range(int min, int max)
{
	int *p;
	unsigned int i;
	unsigned int size = 0;

	if ((max - min) >= 0)
	{
		size = max - min;
	}
	else
	{
		return (NULL);
	}
	p = malloc(size * sizeof(int) + 1);
	if (!p)
		return (p);
	for (i = 0; i <= size; i++, min++)
	{
		*(p + i) = min;
	}
	*(p + size + i) = '\0';
	return (p);
}
