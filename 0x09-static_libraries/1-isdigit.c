#include "main.h"
#include <ctype.h>
/**
 * _isdigit - check if the caracter is a digit
 * @c: caracter to be ckecked
 *
 * Return: 1 if c is a digit otherways return 0
 */
int _isdigit(int c)
{
	if (isdigit(c) != 0)
		return (1);
	return (0);
}

