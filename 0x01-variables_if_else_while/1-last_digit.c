#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Prints a text according number
 * Return: Always (Success)
 *
 */

int main(void)
	
{
		int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		lastd = n % 10;

		if (lastd > 5)
		{
		printf("Last digit of %d is %d and is greater than 		   5\n", n, lastd);
		}
		else if (lastd == 0)
		{
		printf("Last digit of %d is %d and is 0\n", n, last		   d);
		}
		else if (lastd < && lastd is 0)
		{
		printf("last digit of %d is %d and is less than 0 a		   nd not 0\n", n, lastd)
		}
		return (0);
}
