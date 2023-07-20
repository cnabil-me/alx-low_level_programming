#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *  print_strings -  print strings separated by char
 * @separator:char separator
 * @n:number of arguments
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list argPtr;

	va_start(argPtr, n);

	for (i = 0; i < n; i++)
	{
		char *word = va_arg(argPtr, char *);

		if (word == NULL)

			printf("(nil)");

		else

			printf("%s", word);

		if ((i < n - 1 && separator != NULL))

			printf("%s", separator);
	}

	va_end(argPtr);
	printf("\n");
}
