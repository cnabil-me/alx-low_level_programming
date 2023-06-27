#include <stdio.h>
#include <string.h>
/**
 * puts2 - prints every other character of a string
 * @s: the string to print
 * Return: Void
 */
void puts2(char *s)
{
	int i;
	int len = strlen(s);

	for (i = 0; i < len; i += 2)
	{
		putchar(*s + i);
	}
	putchar('\n');
}
