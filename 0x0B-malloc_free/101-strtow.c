#include <stdlib.h>
#include "main.h"

/**
 * count_word - count  number of given words
 * @s: string contains words
 *
 * Return: int of words
 */
int count_word(char *s)
{
	int mark, c, word_count;

	mark = 0;
	word_count = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			mark = 0;
		else if (mark == 0)
		{
			mark = 1;
			word_count++;
		}
	}

	return (word_count);
}
/**
 * **strtow - string to words
 * @str: string input
 *
 * Return: pointer to array of strings or Null
 */
char **strtow(char *str)
{
	char **arrayOfStrings, *tmp;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	arrayOfStrings = (char **)malloc(sizeof(char *) * (words + 1));
	if (arrayOfStrings == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *)malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				arrayOfStrings[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	arrayOfStrings[k] = NULL;

	return (arrayOfStrings);
}

