#include <stdio.h>
#include "main.h"
/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 */
void print_rev(char *s)
{
	_putchar("%s", strrev(*s));
	_putchar('\n');
}
