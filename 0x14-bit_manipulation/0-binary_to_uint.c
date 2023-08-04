#include "main.h"
/**
 * binary_to_uint - binary string to int
 * @b: binary pointer
 * Return: int converted
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number;
	int length, base_2;

	if (!b)
		return (0);

	number = 0;

	for (length = 0; b[length]; length++)
		;

	for (length--, base_2 = 1; length >= 0; length--, base_2 *= 2)
	{
		if (b[length] != '0' && b[length] != '1')

			return (0);

		if (b[length] & 1)

			number += base_2;
	}

	return (number);
}

