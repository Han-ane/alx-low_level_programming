#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: the number of parameters being passed to the function.
 * @...: A variable number of the parameters of which will be calculated.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - An integer representing the sum of all the parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int j, sum = 0;

	va_start(ap, n);

	for (j = 0; j < n; j++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
