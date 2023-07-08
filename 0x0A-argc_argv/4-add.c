#include <stdio.h>
#include <stdlib.h>
#include "main.h"
int is_number(char *s);

/**
 * is_number - check string if it is a number
 * @s: the string to check
 * Return: 1 if a number otherwise 0
 */
int is_number(char *s)
{
	while (*s != '\0')
	{
		if (*s < 0 || *s > '9')
		{
			return (0);
		}
		s++;
	}
	return (1);
}

/**
 * main - the entry point
 * @argc: the number of arguments
 * @argv: array of string arguments
 * Description:prints the arguments passed
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (is_number(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (0);
		}
	}
	printf("%d\n", sum);
	return (0);
}

