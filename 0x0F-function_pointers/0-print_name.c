#include "function_pointers.h"

/**
 * print_name -a function that prints name
 * @name: name to be printed by function
 * @f: function to send the name to
 * Return: 0 Success
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
