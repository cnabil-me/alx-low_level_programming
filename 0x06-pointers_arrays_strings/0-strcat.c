#include <string.h>
#include <stdio.h>
char *_strcat(char *dest, char *src);

/**
 * _strcat - concat twoo strings
 * @src: string src
 * @dest: string distination
 *
 * Return: the dest string after concat
 */
char *_strcat(char *dest, char *src)
{
	return (strcat(dest, src));
}

