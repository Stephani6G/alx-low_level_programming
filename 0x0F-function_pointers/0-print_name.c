#include "function_pointers.h"

/**
 * print_name -a function that prints a name
 * @name: name to be printed by function
 * @f: function to send the name to
 * Return: 0 Success always
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
