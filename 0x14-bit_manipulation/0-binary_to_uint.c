#include "main.h"
#include <unistd.h>
/**
 * binary_to_uint -  converts a binary number to an unsigned int
 * @b: The character to be print as a string
 *
 * Return: 0
 */
unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int value = 0;

	if (!b)
		return (0);

	for (j = 0; b[j]; j++)
	{
		if (b[j] < '0' || b[j] > '1')
			return (0);
		value = 2 * value + (b[j] - '0');
	}

	return (value);
}
