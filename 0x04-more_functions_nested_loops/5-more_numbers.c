#include "main.h"
/**
 * more_numbers - print the numbers 0 to 9
 */
void more_numbers(void)
{
	int i;
	int j;

	for (j = 0; j <= 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}

