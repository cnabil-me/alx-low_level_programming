#include "main.h"
include < stdio.h >
/**
 * print_diagsums - print the diagsums of a matrix
 * @a: array
 * @size: array size
 *
 * Return:void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum_r = 0;
	int sum_l = 0;

	for (i = 0; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
		{
			sum_r += *(a + i);
		}
		if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
		{
			sum_l += *(a + i);
		}
	}
	printf("%d, %d\n", sum_r, sum_l);
}
