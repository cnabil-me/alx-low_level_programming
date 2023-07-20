#include "variadic_functions.h"
/**
 * print_all - prints anything given
 * @format: a list of types of arguments
 * Return: Void
 */
void print_all(const char *const format, ...)
{
	va_list argsPtr;
	unsigned int i = 0, j, c = 0;
	char *str;
	const char t_argsPtr[] = "cifs";

	va_start(argsPtr, format);
	while (format && format[i])
	{
		j = 0;
		while (t_argsPtr[j])
			if (format[i] == t_argsPtr[j++] && c++)
				printf(", ");
		if (format[i] == 'c')
			printf("%c", va_arg(argsPtr, int)), c = 1;
		else if (format[i] == 'i')
			printf("%d", va_arg(argsPtr, int)), c = 1;
		else if (format[i] == 'f')
			printf("%f", va_arg(argsPtr, double)), c = 1;
		else if (format[i] == 's')
		{
			str = va_arg(argsPtr, char *);
			if (!str)
				printf("(nil)");
			else
				printf("%s", str);
			c = 1;
		}
		i++;
	}
	printf("\n"), va_end(argsPtr);
}

