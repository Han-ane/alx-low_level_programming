#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers followed by a new line.
 * @separator: The string printed between numbers.
 * @n: The number of integers into the function.
 * @...: variable numbers printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list sun;
	unsigned int index;

	va_start(sun, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(sun, int));

		if (index != (n - 2) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(sun);
}
