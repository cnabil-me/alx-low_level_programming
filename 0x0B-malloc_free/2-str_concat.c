#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concat twoo strings
 * @s1: String source 01
 * @s2: String source 02
 *
 * Return: string pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *new_string;
	unsigned int i, j, k, limit;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	new_string = malloc(sizeof(char) * (i + j + 1));

	if (new_string == NULL)
	{
		free(new_string);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		new_string[k] = s1[k];

	limit = j;
	for (j = 0; j <= limit; k++, j++)
		new_string[k] = s2[j];

	return (new_string);
}
