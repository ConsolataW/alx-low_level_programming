#include "main.h"

/**
 * clear_bit - sets the bit at a given index to 0
 * @n: pointer to the number to modify
 * @index: index of the bit to clear
 *
 * Return: 1 on success, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1UL << index);
	return (1);
}
