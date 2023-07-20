#include <stdio.h>
#include <stdarg.h>
/**
 *  sum_them_all -  the sum of all its parameters
 * @n:number of arguments
 * Return: sum or 0
 */
int sum_them_all(const unsigned int n, ...)
{
	double sum = 0;
	int i;
	va_list argPtr;

	va_start(argPtr, n);

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(argPtr, int);
	}

	va_end(argPtr);

	return (sum);
}
