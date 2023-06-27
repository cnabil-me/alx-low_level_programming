#include <stdio.h>
#include <string.h>
void swap_char(char *a, char *b);

/**
 * rev_string - reverses a string in place
 * @s: the string to reverse
 * Return: Void
 */
void rev_string(char *s)
{
	int i;
	int len = strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		swap_char(&s[i], &s[len - i - 1]);
	}
}

/**
 * swap_char - swaps two characters
 * @a: pointer to first char
 * @b: pointer to second char
 *
 * Return: Void
 */
void swap_char(char *a, char *b)
{
	char tmp = *a;
	*a = *b;
	*b = tmp;
}

