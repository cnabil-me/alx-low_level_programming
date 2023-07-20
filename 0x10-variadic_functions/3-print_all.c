#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_char - formats character
 * @separator: the string seprator
 * @ap: argument pointer
 * Return: void
 */
void print_char(char *separator, va_list ap)
{
	printf("%s%c", separator, va_arg(ap, int));
}

/**
 * print_int - formats integer
 * @separator: the string seprator
 * @ap: argument pointer
 * Return: void
 */
void print_int(char *separator, va_list ap)
{
	printf("%s%d", separator, va_arg(ap, int));
}

/**
 * print_float - formats float
 * @separator: the string seprator
 * @ap: argument pointer
 * Return: void
 */
void print_float(char *separator, va_list ap)
{
	printf("%s%f", separator, va_arg(ap, double));
}

/**
 * print_string - formats string
 * @separator: the string seprator
 * @ap: argument pointer
 * Return: void
 */
void print_string(char *separator, va_list ap)
{
	char *str = va_arg(ap, char *);

	switch ((int)(!str))
	case 1:
		str = "(nil)";

	printf("%s%s", separator, str);
}

/**
 * print_all - prints anything
 * @format: the format string
 * Return: void
 */
void print_all(const char *const format, ...)
{
	int i = 0, j;
	char *separator = "";
	va_list ap;
	token_t tokens[] = {
	    {"c", print_char},
	    {"i", print_int},
	    {"f", print_float},
	    {"s", print_string},
	    {NULL, NULL}};

	va_start(ap, format);
	while (format && format[i])
	{
		j = 0;
		while (tokens[j].token)
		{
			if (format[i] == tokens[j].token[0])
			{
				tokens[j].f(separator, ap);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}

