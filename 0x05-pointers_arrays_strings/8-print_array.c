#include <stdio.h>
#include <string.h>
/**
 * print_array - array to print
 * @n: n is the number of elements of the array to be printed
 * @a: array to be printed
 * Return: Void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%i", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	putchar('\n');
}

