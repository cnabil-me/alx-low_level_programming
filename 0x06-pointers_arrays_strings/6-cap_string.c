#include <stdio.h>
#include <string.h>
char *cap_string(char *str);
char upper_char(char c);
/**
 * cap_string - capitalized string
 * @str: string to be capitalized
 *
 * Return: String pointer
 */
char *cap_string(char *str)
{

	int i = 0;
	char separators[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	while (str[i] != '\0')
	{
		int j;

		if (i == 0)
		{
			str[0] = upper_char(str[0]);
		}

		for (j = 0; j < 13; j++)
		{
			if (str[i] == separators[j])
			{
				if (str[i + 1] != '\0')
					str[i + 1] = upper_char(str[i + 1]);
			}
		}
		i++;
	}
	return (str);
}
/**
 * upper_char - char to uppercase
 * @c: string to be capitalized
 *
 * Return: capitalized char
 */
char upper_char(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		int asciiCode;
		asciiCode = (int)c;
		asciiCode = asciiCode - 32;
		c = (char)asciiCode;
	}
	return (c);
}
