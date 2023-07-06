#include "main.h"
int is_wildmode(char *s1, char *s2);
int is_exactmode(char *s1, char *s2);
/**
 * is_exactmode - find substring
 * @s1: non-wildcarded string
 * @s2: wildcarded string
 *
 * Return: 1 if substring found,  otherwise 0
 */

int is_exactmode(char *s1, char *s2)
{
	if (*s2 == '*')
		return (is_wildmode(s1, s2 + 1));
	if (*s1 == 0 && *s2 == 0)
		return (1);
	if (*s1 == *s2)
		return (is_exactmode(s1 + 1, s2 + 1));
	return (0);
}

/**
 * is_wildmode - Processes wildcards
 *
 * @s1: string to match
 * @s2: searched pattern
 *
 * Return: 1 if valid match,otherwise 0
 */
int is_wildmode(char *s1, char *s2)
{
	if (*s2 == '*')
		return (is_wildmode(s1, s2 + 1));
	if (*s2 == 0)
		return (1);
	if (*s1 == 0)
		return (0);
	if (*s1 != *s2)
		return (is_wildmode(s1 + 1, s2));
	if (!(is_exactmode(s1 + 1, s2 + 1)))
		return (is_wildmode(s1 + 1, s2));
	return (1);
}

/**
 * wildcmp - compares two strings
 *
 * @s1: first string, can not contain the special character *
 * @s2: second string, can contain the special character *
 *
 * Return: 1 if identical, otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
		return (is_wildmode(s1, s2));
	return (is_exactmode(s1, s2));
}

