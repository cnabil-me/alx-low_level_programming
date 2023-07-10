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
 * _strdup - copy of the string given as a parameter
 * @str: string to copy
 * Return: pointer to the new string
 */
char *_strdup(char *str)
{

	if (str == NULL)
	{

		return (NULL);
	}
	else
	{

		int i;
		int strlen = _strlen_recursion(str);
		char *new_str = malloc(sizeof(char)+1);

		if (new_str == NULL)
		{
			return (NULL);
		}
		for (i = 0; i <= strlen; i++)
		{
			new_str[i] = str[i];
		}

		return (new_str);
		free(new_str);
		new_str = NULL;
	}
}
