#include <stdlib.h>
#include <time.h>
/*more headers go here */

/*main - Assigning a random number n */
int main(void)
{
	int n;

	srand(time(0))
	int n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}	
	return (0);
}

