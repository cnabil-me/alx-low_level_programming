#include "main.h"
#include "main.h"
int is_prime(int x, int y);
/**
 * is_prime_number - check if a number is prime
 * @n: the input number
 * Return: 1 if the number is prime otherwise 0;
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (is_prime(n, 2));
}

/**
 * is_prime - finds out if a number is prime recursively
 *
 * @x: the determine if it is prime
 * @y: the check if it is divisor
 *
 * Return: 1 if prime,  otherwise 0
 */
int is_prime(int x, int y)
{
	if (x == y)
		return (1);
	if (!(x % y))
		return (0);
	return (is_prime(x, y + 1));
}

