#include <stdio.h>
#include "main.h"

/**
 * main - the entry point
 * @argc: the number of arguments
 * @argv: array of string arguments
 * Description:program to print its path name
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s", argv[0]);
	return (0);
}

