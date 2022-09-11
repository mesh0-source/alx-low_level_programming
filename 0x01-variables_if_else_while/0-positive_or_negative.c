#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*a header here*/

/*main - Assigning a random number n 
 *Return: 0
 */

int main(void)
/*  prints the sign magnitude of n */
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (1 > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, 1);
	}
	else if (1 == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, 1);
	}
	else
	{
		printf("last digit of %d is %d and is less than 5\n", n, 1);
	}
	return (0);
}

