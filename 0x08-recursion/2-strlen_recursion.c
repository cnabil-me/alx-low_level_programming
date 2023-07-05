#include "main.h"
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
