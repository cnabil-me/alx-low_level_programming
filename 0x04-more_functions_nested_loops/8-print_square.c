#include "main.h"
/**
 * print_square - prints a square, followed by a new line.
 * @n: sqare # size
 */

void print_square(int n)
{
	int i, j;

	if (n > 0)
	{

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}

