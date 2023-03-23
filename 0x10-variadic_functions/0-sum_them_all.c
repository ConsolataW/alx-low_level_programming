#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum all the parameters passed
 * @n: number of parameters
 * @...: A variable number of parameters to calculate the sum of.
 *
 * Return: if n == 0 - 0.
 *	Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	Va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int)

	va_end(ap);

	return (sum);
}
