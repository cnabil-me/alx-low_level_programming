#include "main.h"
/**
 * _strchr - first occurrence of the character c,
 * @s: the string.
 * @c: the character.
 * Return: the pointer to the first occurrence or NULL.
 */
char *_strchr(char *s, char c)
{
	if (*s == '\0')
		return (s);
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
		return (s);
	return ('\0');
}

