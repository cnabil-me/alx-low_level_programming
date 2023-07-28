#include <stdio.h>
/**
 * before_main - function must executed before the main
 * Return: Void
 */

void __attribute__((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}

