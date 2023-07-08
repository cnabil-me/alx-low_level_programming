#include <stdio.h>
#include "main.h"

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
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}

