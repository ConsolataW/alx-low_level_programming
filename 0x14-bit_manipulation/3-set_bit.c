#include "main.h"

/**
 * set_bit - sets a specific bit at a particular position
 * @num: the pointer to the bit being set
 * @index: the position being referred to
 * Return: 1 if success, -1 if fail
 */
int set_bit(unsigned long int *num, unsigned int index)
{
	if (index >= sizeof(*num) * 8)
		return (-1);

	*num |= (1UL << index);

	return (1);
}
