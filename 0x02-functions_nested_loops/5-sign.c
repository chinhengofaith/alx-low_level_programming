#include "main.h"
/**
 * print_sign - a function to print the sign of a number
 * @x: number input
 * Return: 1 prints '+' if x > 0, 0 prints '0' if x = 0, -1 prints '-' if x < 0
 */
int print_sign(int x)
{
	if (x > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (x == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}
