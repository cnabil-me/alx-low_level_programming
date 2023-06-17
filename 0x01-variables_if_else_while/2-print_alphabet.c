#include <stdio.h>
/**
 * main : entry point
 *
 * Description : print a to z alphabets
 * Return: is 0 success
 */
 int main(void)
 {
        int n  = 97;
        while(n <= 122)
        {
                putchar(n);
                n++;
        }
	return (0);	
 }
