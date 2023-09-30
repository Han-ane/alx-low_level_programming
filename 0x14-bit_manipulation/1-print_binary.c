#include "main.h"

/**
 * print_binary -  prints the binary representation of a numbe
 * @n: number to print
 */
void print_binary(unsigned long int n)
{
	int j, num = 0;
	unsigned long int num;

	for (j = 63; j >= 0; j--)
	{
		num = n >> j;

		if (num & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
