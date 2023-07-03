#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _memset - Replace a text in a buffer
 * @s: string pointer
 * @n: number of caracters to replace
 * @b: the caracter to replace with
 *
 * Return: the string pointer.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;

	return (s);
}
