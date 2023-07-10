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
	unsigned int i, j, k, s1_count, s2_count;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	char *new_string = malloc(sizeof(char) * (i + (j - 1)));

	s1_count = 0;

	while (s1_count < i)
	{
		new_string[s1_count] = s1[s1_count];
		s1_count++;
	}

	s2_count = i;
	k = 0;
	while (k <= j)
	{
		new_string[s2_count] = s2[k];
		s2_count++;
		k++;
	}
	new_string[i + j] = '\0';
	return (new_string);
}
