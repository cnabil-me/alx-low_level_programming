#include "main.h"
int _isupper(int c);
/**
 * _isupper - check if the caracter is uppercase
 * @c: a caracter to be checkeed
 *
 * Return: 1 if c is uppercase otherways return 0
 */
int _isupper(int c)
{
	if (isupper(c) != 0)
		return (1);
	return (0);
}
