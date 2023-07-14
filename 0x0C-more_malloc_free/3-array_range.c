#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/***
 * array_range - creates an array of integers
 * @min: minimum number
 * @max: maximum number
 * Return:  pointer to the newly created array or NULL
 */
int *array_range(int min, int max)
{
	int *p;
	unsigned int i;
	unsigned int size = 0;

	if (min > max)
		return (NULL);

	p = malloc(sizeof(*p) * ((max - min) + 1));

	if (p == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		p[i] = min;

	return (p);
}
