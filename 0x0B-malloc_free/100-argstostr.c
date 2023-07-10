#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all main arguments.
 * @ac: argument count.
 * @av: argument vector.
 *
 * Return: pointer of char
 */
char *argstostr(int ac, char **av)
{
	char *export;
	int c, i, j, ia;

	if (ac == 0)
	{
		return (NULL);
	}

	for (c = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
		{
			return (NULL);
		}

		for (j = 0; av[i][j] != '\0'; j++)
		{
			c++;
		}
		c++;
	}

	export = malloc((c + 1) * sizeof(char));

	if (export == NULL)
	{
		free(export);
		return (NULL);
	}

	for (i = j = ia = 0; ia < c; j++, ia++)
	{
		if (av[i][j] == '\0')
		{
			export[ia] = '\n';
			i++;
			ia++;
			j = 0;
		}
		if (ia < c - 1)
		{
			export[ia] = av[i][j];
		}
	}
	export[ia] = '\0';

	return (export);
}

