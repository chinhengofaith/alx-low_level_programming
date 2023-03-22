#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name -function that Prints a name
 * @name: The name to be printed
 * @f: Pointer to function
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
