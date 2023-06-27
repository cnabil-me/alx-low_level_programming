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
		printf("%c", *(s + i - 1));
	}
	printf("\n");
}
