#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concat twoo strings
 * @s1: string 01
 * @s2: string 02
 * @n: length string 02
 * Return: Pointer to the new string.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *sout;
	unsigned int len_s1, ls2, len_sout, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (len_s1 = 0; s1[len_s1] != '\0'; len_s1++)
		;

	for (ls2 = 0; s2[ls2] != '\0'; ls2++)
		;

	if (n > ls2)
		n = ls2;

	len_sout = len_s1 + n;

	sout = malloc(len_sout + 1);

	if (sout == NULL)
		return (NULL);

	for (i = 0; i < len_sout; i++)
		if (i < len_s1)
			sout[i] = s1[i];
		else
			sout[i] = s2[i - len_s1];

	sout[i] = '\0';

	return (sout);
}
