#include <stdio.h>
#include <string.h>
/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
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

