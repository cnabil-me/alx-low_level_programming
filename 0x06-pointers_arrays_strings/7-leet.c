/**
 * leet - leet speak.
 * @str: string to process
 *
 * Return: a pointer to the string
 */
char *leet(char *str)
{
	char lt[10][2] = {
	    {'a', '0' + 4},
	    {'A', '0' + 4},
	    {'e', '0' + 3},
	    {'E', '0' + 3},
	    {'o', '0'},
	    {'O', '0'},
	    {'t', '0' + 7},
	    {'T', '0' + 7},
	    {'l', '0' + 1},
	    {'L', '0' + 1}
	};
	int i = 0;
	int z = 0;

	while (str[i] != '\0')
	{
		while (lt[z][0] != '\0')
		{
			if (str[i] == lt[z][0])
				str[i] = lt[z][1];
			z++;
		}
		z = 0;
		i++;
	}
	return (str);
}

