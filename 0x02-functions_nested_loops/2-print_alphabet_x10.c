#include "main.h"
/**
 * print_alphabet_x10 - write from z to z X 10
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_alphabet_x10(void)
{
	int count;
	char lower;

	for (count = 1; count <= 10; count++)
	{
		for (lower = 'a'; lower <= 'z'; lower++)
		{
			_putchar(lower);
		}
		_putchar('\n');
	}
}
