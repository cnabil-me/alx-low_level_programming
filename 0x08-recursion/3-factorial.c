#include "main.h"
/**
 * factorial - calculate the factorial of a given number
 * @n:  the input number
 * Return: the factorial of a given number.
 */
int factorial(int n)
{
	if (n <= -1)
		return (-1);
	if (n <= 1)
		return (1);

	return (n * factorial(n - 1));
}
