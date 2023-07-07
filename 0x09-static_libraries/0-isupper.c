#include "main.h"
#include <ctype.h>
/**
 * _isupper - check if the caracter is uppercase
 * @c: caracter to be ckecked
 *
 * Return: 1 if c is uppercase otherways return 0
 */
int _isupper(int c)
{
	if (isupper(c) != 0)
		return (1);
	return (0);
}

