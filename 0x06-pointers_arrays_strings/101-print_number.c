#include "main.h"
void print_number(int n);

/**
 * print_number - prints a number
 * @n: number to process.
 *
 */
void print_number(int n)
{
	unsigned int num;

	if (n < 10 && n >= 0)
	{
		_putchar('0' + n);
		return;
	}
	if (n < 0)
	{
		num = -n;
		_putchar('-');
	}
	else
	{
		num = n;
	}

	if (num >= 10)
	{
		print_number(num / 10);
	}
	_putchar('0' + (num % 10));
}

