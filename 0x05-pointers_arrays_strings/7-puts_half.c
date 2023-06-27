#include <stdio.h>
#include <string.h>
/**
 * puts_half - prints every other character of a string
 * @s: the string to print
 * Return: Void
 */
void puts_half(char *s)
{
	int i;
	int len = strlen(s);

	for (i = (len - 1) / 2; i <= len; i++)
	{
		putchar(s[i]);
	}
	putchar('\n');
}

