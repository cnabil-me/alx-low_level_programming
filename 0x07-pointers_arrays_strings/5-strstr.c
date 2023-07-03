#include "main.h"
#include <stdio.h>
/**
 * _strstr - locate the first occurrence of a substring within another string
 * @haystack: pointer to the string to be searched
 * @needle: Pointer to the string search for string.
 * Return: the first accurence pointer or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;
	char *ptr = NULL;
	int first_found = 0;

	for (i = 0; *(haystack + i) != '\0'; i++)
	{
		for (j = 0; *(needle + j) != '\0'; j++)
		{

			if (*(haystack + i) == *(needle + j))
			{
				if (first_found == 0)
				{

					first_found = 1;
					ptr = &haystack[i];
				}
			}
			else
				break;
		}
	}
	return (ptr);
}

