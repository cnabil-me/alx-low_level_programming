#include "main.h"

/**
 * _strchr - find first occurrence of c
 * @c: caracter to find
 * @s: string to search in
 * Return: a pointer to the first occurrence or NULL
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return ('\0');
}
