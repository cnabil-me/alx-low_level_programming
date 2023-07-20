#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the opcodes of its own.
 * @argc: args
 * @argv: Nbr of args
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	char *ptr = (char *)main;
	int buff;

	if (argc != 2)
		printf("Error\n"), exit(1);
	buff = atoi(argv[1]);
	if (buff < 0)
		printf("Error\n"), exit(2);

	while (buff--)
		printf("%02hhx%s", *ptr++, buff ? " " : "\n");
	return (0);
}

