#include "main.h"
#include <stdio.h>
/**
 * _strchr - find first occurrence of c
 * @c: caracter to find
 * @s: string to search in
 * Return: a pointer to the first occurrence
 * of the character c in the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (NULL);
}

