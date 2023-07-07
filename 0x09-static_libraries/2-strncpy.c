#include <string.h>
#include <stdio.h>
char *_strncpy(char *dest, char *src, int n);

/**
 * _strncpy - copy strings
 * @src: string src
 * @dest: string distination
 * @n: number of
 *
 * Return: the dest string after copy
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}

