#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - the entry point
 * @argc: the number of arguments
 * @argv: array of string arguments
 * Description:  prints the minimum number of coins to make change
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;
	int coins[] = {25, 10, 5, 2, 1};
	int number_of_coins = 0;
	int amount = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	amount = atoi(argv[1]);

	if (amount > 0)
	{
		for (i = 0; i <= 4; i++)
		{
			if ((amount / coins[i]) > 0)
			{
				number_of_coins += amount / coins[i];
				amount = amount % coins[i];
			}
		}
	}
	else
	{
		printf("0\n");
		return (0);
	}

	printf("%d\n", number_of_coins);
	return (0);
}

