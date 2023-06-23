#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of triangle
 * Description: prints a triangle, followed by a new line
 * Return: always 0
 */

void print_triangle(int size)
{

	int i, j, k;

	for (i = size; i > 0; i--)
	{
		for (k = i; k > 1; k--)
		{
			_putchar(' ');
		}
		for (j = 0; j <= size - i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

