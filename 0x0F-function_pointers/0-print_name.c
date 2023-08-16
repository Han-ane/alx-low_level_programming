#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - print name using a function pointer
 * @name: name of the person
 * @f: function pointer
 * Return: empty
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
