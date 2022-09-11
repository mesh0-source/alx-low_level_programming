#include <stdlib.h>
#include <time.h>
/*more headers go here */

/*main - Assigning a random number n */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	return (0);
}

