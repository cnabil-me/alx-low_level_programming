#include "variadic_functions.h"

/**
 * print_all - prints anything given
 * @format: a list of types of arguments
 *
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
		{
			if (format[i] == t_argsPtr[j] && c)
			{
				printf(", ");
				break;
			}
			j++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(argsPtr, int)), c = 1;
			break;
		case 'i':
			printf("%d", va_arg(argsPtr, int)), c = 1;
			break;
		case 'f':
			printf("%f", va_arg(argsPtr, double)), c = 1;
			break;
		case 's':
			str = va_arg(argsPtr, char *), c = 1;
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		}
		i++;
	}
	printf("\n"), va_end(argsPtr);
}

