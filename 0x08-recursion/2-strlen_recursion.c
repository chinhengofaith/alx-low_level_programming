#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - a function to print the length of a string
 * @s: input
 * Return: Always 0 (Success)
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
