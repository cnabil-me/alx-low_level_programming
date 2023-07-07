#include <string.h>
#include <stdio.h>
char *_strncat(char *dest, char *src, int n);
/**
 * _strncat - concat twoo strings
 * @src: string src
 * @dest: string distination
 * @n: number of
 *
 * Return: the dest string after concat
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}

