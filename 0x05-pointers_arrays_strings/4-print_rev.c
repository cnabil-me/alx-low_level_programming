#include <stdio.h>
#include <string.h>
/**
 * print_rev - reverse string
 * @s: string pointer
 *
 * Return: Void
 */

void print_rev(char *s)
{
	int i;
	int len = strlen(s);

	for (i = len; i > 0; i--)
	{
		_putchar(*(s + i - 1));
	}
	_putchar('\n');
}
