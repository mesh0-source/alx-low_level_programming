#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*a header here*/

/*main - Assigning a random number n */

int main(void)
/*  prints the sign magnitude of n */
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = (n % 10);
	if (m > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	}
	else if (m == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, m);
	}
	else if (abs(m) < 6 && abs(m) > 0)
	{
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, m);
	}
	return (0);
}

