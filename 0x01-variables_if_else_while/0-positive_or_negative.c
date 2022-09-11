#include <stdlib.h>
#include <time.h>
/*more headers go here */

/*main - Assigning a random number n */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n>0);
		printf(%dn "is positive")
	else if(n=0);
		printf(%dn "is zero")
	else if(n<0);
		printf(%dn "is negative" )	
	return (0);
}

