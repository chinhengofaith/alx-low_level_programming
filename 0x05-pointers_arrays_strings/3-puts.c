#include <stdio.h>
#include <string.h>
/**
 * _puts - a function to print a string
 * @str: a pointer to a string
 *
 * Return: nothing
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
