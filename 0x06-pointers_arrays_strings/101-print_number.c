// #include "main.h"
#include <unistd.h>

void print_number(int n);
int _putchar(char c);

/**
 * print_number - prints a number
 * @n: number to process.
 *
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

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

