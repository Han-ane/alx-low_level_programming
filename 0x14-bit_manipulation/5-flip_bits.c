#include "main.h"

/**
 * flip_bits - returns the number of bits that would need
 * to get from one number to another
 * @n: primal number
 * @m: second number
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int index, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (index = 63; index >= 0; index--)
	{
		current = exclusive >> index;
		if (current & 1)
			count++;
	}

	return (count);
}
