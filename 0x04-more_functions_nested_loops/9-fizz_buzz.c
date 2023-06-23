#include "main.h"
#include <stdio.h>

/**
 * main - FizzBuzz
 * Description: FizzBuzz game.
 * Return: always 0
 */

int main(void)
{
	int n = 1;

	while (n <= 100)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (n % 5 == 0)
			printf("Buzz ");
		else if (n % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", n);
		n++;
	}
	return (0);
}

