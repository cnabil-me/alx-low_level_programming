#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - the entry point
 * @argc: the number of arguments
 * @argv: array of string arguments
 * Description: print the result of the multiplication of 2 numbers
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);

	printf("%d\n", a * b);
	return (1);
}

