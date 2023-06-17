#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main : entry point
 *
 * Description : check the number is positif , negatif , or zero
 * Return : is positive | is zero | is negative
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	printf("%d ",n);

	if(n>0)
	{
		printf("is positive");
	} 
	else if(n==0) 
	{
		printf("is zero");
	}
	else
	{
		printf("is negative");
	}
	return (0);

}
