#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * is_number - checks if character is a number
 * @c: the character to be checked
 *
 * Return: 1 or 0 if not a number
 */
int is_number(int c)
{
	return (c >= '0' && c <= '9');
}

/**
 * str_len - returns the length of a given string
 * @s: the string to check
 *
 * Return: int length of string
 */
int str_len(char *s)
{
	int i = 0;

	while (*s++)
		i++;
	return (i);
}

/**
 * the_big_multiply - multiply two big number strings
 * @s1: the first big number
 * @s2: the second big number
 *
 * Return: the product big number
 */
char *the_big_multiply(char *s1, char *s2)
{
	char *r;
	int l1, l2, a, b, c, x;

	l1 = str_len(s1);
	l2 = str_len(s2);
	r = malloc(a = x = l1 + l2);
	if (!r)
		printf("Error\n"), exit(98);
	while (a--)
		r[a] = 0;

	for (l1--; l1 >= 0; l1--)
	{
		if (!is_number(s1[l1]))
		{
			free(r);
			printf("Error\n"), exit(98);
		}
		a = s1[l1] - '0';
		c = 0;

		for (l2 = str_len(s2) - 1; l2 >= 0; l2--)
		{
			if (!is_number(s2[l2]))
			{
				free(r);
				printf("Error\n"), exit(98);
			}
			b = s2[l2] - '0';

			c += r[l1 + l2 + 1] + (a * b);
			r[l1 + l2 + 1] = c % 10;

			c /= 10;
		}
		if (c)
			r[l1 + l2 + 1] += c;
	}
	return (r);
}

/**
 * main - multiply two big number
 * @argc: the number of arguments
 * @argv: the argument vector
 *
 * Return: Always 0 .
 */
int main(int argc, char **argv)
{
	char *r;
	int a, c, x;

	if (argc != 3)
		printf("Error\n"), exit(98);

	x = str_len(argv[1]) + str_len(argv[2]);
	r = the_big_multiply(argv[1], argv[2]);
	c = 0;
	a = 0;
	while (c < x)
	{
		if (r[c])
			a = 1;
		if (a)
			_putchar(r[c] + '0');
		c++;
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(r);
	return (0);
}

