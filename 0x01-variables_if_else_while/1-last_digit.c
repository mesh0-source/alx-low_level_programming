#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*a header here*/

/**
 * main - Assigning a random number n
 * Return: 0
 */

int main(void)
/*  prints the sign magnitude of n */
{
	char c;
	clrscr ();
	for (c = 'a'; c = 'z'; c++)
		putchar(c);
	putchar("\n");
	for (c = 'A'; c = 'Z'; c++)
		putchar(c);
	putchar("\n");
	getch();
	return (0);
}

