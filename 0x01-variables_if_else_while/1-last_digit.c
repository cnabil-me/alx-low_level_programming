#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * check the last digit of a random number
 *
 * Return: always work
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;

	printf("Last digit of %d is", n, xxx);

	if (last_digit > 5)
	{
		printf("and is greater than 5");
	
	} else if (last_digit == 0)
	{
		printf("and is 0");

	} else if (last_digit < 6)
	{
		printf("and is less than 6 and not 0");
	}

	printf("\n");

	return (0);
}
