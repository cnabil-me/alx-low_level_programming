#include <stdio.h>
#include <string.h>
/**
 * _strcpy - copy string
 * @src: string source
 * @dest: pointer distination
 * Return: Void
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
