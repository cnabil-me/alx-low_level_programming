#include "main.h"
/**
 * _strstr - locate the first occurrence of a substring within another string
 * @haystack: pointer to the string to be searched
 * @needle: Pointer to the string search for string.
 * Return: the first accurence pointer or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	char *xhaystack;
	char *xneedle;

	while (*haystack != '\0')
	{
		xhaystack = haystack;
		xneedle = needle;

		while (*haystack != '\0' && *xneedle != '\0' && *haystack == *xneedle)
		{
			haystack++;
			xneedle++;
		}
		if (!*xneedle)
			return (xhaystack);
		haystack = xhaystack + 1;
	}
	return (0);
}
