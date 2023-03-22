#include "function_pointers.h"
/**
 * print_name - Prints a name
 * @name: name to be printed
 * @f: a pointer to a function that prints the name
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
