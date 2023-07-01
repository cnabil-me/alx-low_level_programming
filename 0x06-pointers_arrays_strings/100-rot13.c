#include <stdio.h>
char *rot13(char *s);

/**
 * rot13 -  encodes rot13.
 * @str: string to encode
 *
 * Return: a pointer str
 */
char *rot13(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		while (
		    ((str[i] >= 'a' && str[i] <= 'm') ||
		     (str[i] >= 'A' && str[i] <= 'M')))
		{
			str[i] += 13;
			i++;
		}
		if ((str[i] >= 'n' && str[i] <= 'z') || (str[i] >= 'N' && str[i] <= 'Z'))
			str[i] -= 13;
		i++;
	}
	return (str);
}

