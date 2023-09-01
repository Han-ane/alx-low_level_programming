#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to index
 * @index: the index, starting from 0 of the bit you want to get
 *
 * Return: the value of the bit at index index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int val;

	if (i > 63)
		return (-1);

	val = (n >> i) & 1;

	return (val);
}
