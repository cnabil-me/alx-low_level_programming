#include <stdio.h>
#include <string.h>
/**
 * puts_half - prints every other character of a string
 * @str: the string to print
 * Return: Void
 */
void puts_half(char *str)
{
	int i;
	int len = strlen(str);

	for (i = (len) / 2; i <= len; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
