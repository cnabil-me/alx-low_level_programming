#include <string.h>
#include <stdio.h>
int _strcmp(char *s1, char *s2);
/**
 * _strcmp - copy strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: the dest string after copy
 */
int _strcmp(char *s1, char *s2)
{
	return (strcmp(s1, s2));
}

