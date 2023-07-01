#include "main.h"
/**
*print_number - prints number
*
*@n: integer to be printed
*/
void print_number(int n)
{
	unsigned int divisor, temp1, temp2;

	if (n < 0)
	{
		temp1 = -n;
		_putchar('-');
	}
	else
	{
		temp1 = n;
	}

	divisor = 1;
	temp2 = temp1;

	while (temp2 > 9)
	{
		temp2 /= 10;
		divisor *= 10;
	}

	while (divisor >= 1)
	{
		_putchar(((temp1 / divisor) % 10) + 48);
		divisor /= 10;
	}
}
