#include "main.h"
#include <stdint.h>

/**
 * get_endianness - checks the endianness
 *
 * Return: Always return 0
 */
int get_endianness(void)
{
	union
	{
		uint32_t i;
		char c[4];
	}
	test = {0x01020304};

	return (test.c[0] == 4);
}
