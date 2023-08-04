#include "main.h"
/**
 * get_endianness - checks  endianness
 * Return: 0 on big endian, 1 on little endian
 */
int get_endianness(void)
{
	unsigned int x;
	char *c;

	x = 1;
	c = (char *)&x;

	return ((int)*c);
}
