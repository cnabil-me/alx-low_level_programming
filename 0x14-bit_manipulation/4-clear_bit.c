#include "main.h"
/**
 * clear_bit - sets the value of bit to 0 at index
 * @n: pointer of an unsigned long int
 * @index: index of bit
 * Return: 1 on succes otherwize -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int tmp;

	if (index > 63)
		return (-1);

	tmp = 1 << index;

	if (*n & tmp)
		*n ^= tmp;

	return (1);
}
