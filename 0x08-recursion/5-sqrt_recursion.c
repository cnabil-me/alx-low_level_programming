#include "main.h"
int _power(int n, int c);
/**
 * _power - returns the power of a number.
 * @n: input number.
 * @c: iterator.
 * Return: power of n.
 */
int _power(int n, int c)
{
	if (c % (n / c) == 0)
	{
		if (c * (n / c) == n)
			return (c);
		else
			return (-1);
	}
	return (0 + _power(n, c + 1));
}
/**
 * _sqrt_recursion - returns the natural square root .
 * @n: the input number.
 * Return: natural square root of n.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (_power(n, 2));
}

