#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* scripting */

/**
 * main - Assign a random number to the variable n
 * Return: 0 
 */

int main(void)
/*  prints the sign magnitude of n */
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 1)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}

