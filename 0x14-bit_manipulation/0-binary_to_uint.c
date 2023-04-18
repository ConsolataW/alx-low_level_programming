#include "main.h"
#include <stddef.h>

/**
 * In function: binary_to_uint - convert a binary number to an unsigned int
 * @b: pointer to a string of 0's and 1's
 *
 * Return: the decimal format of the binary number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b == '0' || *b == '1')
		{
		num = (num << 1) + (*b - '0');
		b++;
		}
		else
		return (0);
	}

	return (num);
}
