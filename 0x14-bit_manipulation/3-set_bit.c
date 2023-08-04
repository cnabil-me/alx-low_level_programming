#include "main.h"
/**
 * set_bit - sets the value  bit to 1 at index.
 * @n: int pointer
 * @index: index of bit
 * Return: 1 on succes otherwize -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int tmp;

	if (index > 63)
		return (-1);

	tmp = 1 << index;
	*n = (*n | tmp);

	return (1);
}
