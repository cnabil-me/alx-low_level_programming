#include <stdio.h>
#include <stdio.h>
void reverse_array(int *a, int n);
/**
 * reverse_array - reverse an array
 * @a: the array
 * @n: the size of the array
 * Return: Void.
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < (n + 1) / 2; i++)
	{
		temp = a[i];
		a[i] = a[(n - 1) - i];
		a[(n - 1) - i] = temp;
	}
}

