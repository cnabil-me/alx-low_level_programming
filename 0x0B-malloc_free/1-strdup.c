#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - copy of the string given as a parameter
 * @str: string to copy
 * Return: pointer to the new string
 */
char *_strdup(char *str)
{
	char *new_str;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	new_str = (char *)malloc(sizeof(char) * (i + 1));

	if (new_str == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		new_str[j] = str[j];

	return (new_str);
}
