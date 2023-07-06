#include "main.h"
int check_if_palindrome(char *s, int l);
int _strlen_recursion(char *s);

/**
 * strlen_recursion -  calculate the lenghts of string using recursion
 * @s: string input
 * Return: int the lenght
 */
int strlen_recursion(char *s)
{
	if (*s == 0)
		return (0);
	return (1 + strlen_recursion(s + 1));
}

/**
 * check_if_palindrome - ckeck if is a palindromes
 * @s: string to fcheck
 * @l: last offset of the string
 * Return: 1 if palindrome,  otherwise 0
 */
int check_if_palindrome(char *s, int l)
{
	if (l < 1)
		return (1);
	if (*s == *(s + l))
		return (check_if_palindrome(s + 1, l - 2));
	return (0);
}

/**
 * is_palindrome - check if string is palindrome
 * @s: string to check
 * Return: 1 if palindrome, otherwise 0
 */
int is_palindrome(char *s)
{
	int len = strlen_recursion(s);

	return (check_if_palindrome(s, len - 1));
}

