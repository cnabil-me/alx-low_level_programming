#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - allocate array and fill with caracter
 * @size: size of array
 * @c: caracter to fill with
 *
 * Return: pointer of array.
 */
char *create_array(unsigned int size, char c)
{
	int i;
	char *t = malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}

	if (t == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < (int)size; i++)
		{
			t[i] = c;
		}
		t[size] = '\0';
	}

	return (t);
}
