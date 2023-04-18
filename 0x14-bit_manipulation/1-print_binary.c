#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to print
 */
void print_binary(unsigned long int n)
{
	unsigned long int bit = 1;
	int bits = 0;

	while ((n >> bits) > 0)
		bits++;

	while (--bits >= 0)
	{
		if ((n & (bit << bits)) == (bit << bits))
			_putchar('1');
		else
			_putchar('0');
	}
}

