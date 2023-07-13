#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen_recursion -  calculate the lenghts of string using recursion
 * @s: string input
 * Return: int the lenght
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * string_nconcat - concat twoo strings
 * @s1: string 01
 * @s2: string 02
 * @n: length string 02
 * Return: Pointer to the new string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size_of_s1 = _strlen_recursion(s1);
	unsigned int size_of_s2 = _strlen_recursion(s2);
	unsigned int i, j;
	unsigned int last = 0;
	void *p;

	p = malloc(sizeof(char) * (size_of_s1 + size_of_s2 + 1));

	if (p == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size_of_s1; i++)
	{
		*(char *)(p + i) = *(char *)(s1 + i);
		last++;
	}
	if (n < size_of_s2)
	{
		size_of_s2 = n;
	}

	for (j = 0; j < size_of_s2; j++)
	{
		*(char *)(p + size_of_s1 + j) = *(char *)(s2 + j);
		last++;
	}

	*(char *)(p + last + 1) = '\0';

	return (p);
}
