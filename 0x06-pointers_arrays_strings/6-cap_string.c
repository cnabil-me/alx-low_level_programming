/**
 * is_a_separator - check if a char is a seperator.
 * @s: the char to test.
 *
 * Return: 1 if seperator is found else 0
 */
int is_a_separator(char s)
{
	char sep[] = {'\n', ' ', ',', ';', '!',
		      '.', '?', '\"', '(', ')', '{', '}', '\t'};
	int i = 0;

	while (sep[i] != '\0')
	{
		if (s == sep[i])
			return (1);
		i++;
	}
	return (0);
}

/**
 * cap_string -  capitalizes words of a string.
 * @str: sring to be capitalized.
 *
 * Return: pointer to the  string.
 */
char *cap_string(char *str)
{
	int separator, i;

	separator = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (separator == 1 && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 32;
			separator = 0;
		}
		separator = is_a_separator(str[i]);
		i++;
	}
	return (str);
}

