#include "main.h"
/**
 * print_binary - prints as binary number
 * @n: int number.
 * Return: Void.
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	int num_bits = sizeof(unsigned long int) * 8;
	int leading_zeros = 1;

	for (int i = num_bits - 1; i >= 0; i--)
	{
		unsigned long int mask = 1UL << i;

		if ((n & mask) != 0)
		{
			leading_zeros = 0;
			_putchar('1');
		}
		else if (!leading_zeros)
		{
			_putchar('0');
		}
	}
}

