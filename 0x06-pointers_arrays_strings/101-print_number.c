#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
void print_number(int n);

/**
 * print_number - prints a number
 * @n: number to process.
 *
 */

void print_number(int n)
{
	char str[20];

	sprintf(str, "%d", n);

	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}

