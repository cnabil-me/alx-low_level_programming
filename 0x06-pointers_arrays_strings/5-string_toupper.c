#include <stdio.h>
#include <string.h>
char *string_toupper(char *str);
/**
 * string_toupper - string to uppercase
 * @str: string to be uppercase
 *
 * Return: String pointer
 */
char *string_toupper(char *str)
{
	int i = 0;
	int asciiCode;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			asciiCode = (int)str[i];
			asciiCode = asciiCode - 32;
			str[i] = (char)asciiCode;
		}

		i++;
	}

	return (str);
}

