#include "function_pointers.h"
/**
 * print_name - print a name
 * @name: the string name
 * @f: pointer to a function that print name
 * Return: Void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}

