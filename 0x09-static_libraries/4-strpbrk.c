#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - search the first occurence in an assets of caracters
 *
 * @s: string to search in
 * @accept: assets of caracters to search with
 *
 * Return: the first accurence pointer or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;
	char *ptr = NULL;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				return (ptr = &s[i]);
			}
		}
	}
	return (ptr);
}

