#include "main.h"

/**
 * print_binary - converts the decimal format number into binary
 * @n: decimal number
 */
void print_binary(unsigned long int n)
{
	int i, k;

	if (n == 0)
	{
	_putchar('0');
	return;
	}

	for (i = 63; i >= 0; i--)
	{
	k = n >> i;

	if (k & 1)
		_putchar('1');
	else
		_putchar('0');
	}
}
