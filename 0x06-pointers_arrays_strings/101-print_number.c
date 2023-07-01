// #include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void print_number(int n);
int _putchar(char c);

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

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

