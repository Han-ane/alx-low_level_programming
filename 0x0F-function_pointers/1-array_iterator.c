#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints each array element on a file
 * @array: configuration
 * @size: many to element print
 * @action: pointer to print in regular
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (array == NULL || action == NULL)
		return;

	for (j = 0; j < size; j++)
	{
		action(array[j]);
	}
}
