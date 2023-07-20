#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *  print_numbers -  print numbers separated by char
 * @separator:char separator
 * @n:number of arguments
 * Return: sum or 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list argPtr;

	va_start(argPtr, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(argPtr, int));
		if ((i < n - 1 && separator != NULL))
			printf("%s", separator);
	}

	va_end(argPtr);
	printf("\n");
}
