#include <stdio.h>
#include "main.h"
/**
 * print_triangle - Function that prints a triangle.
 * @size: the size of the triangle
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int x, y = 0;
	int space;

	if (size > 0)
	{
		while (y < size)
		{
			space = size - y - 1;
			while (x < size)
			{
				if (space > x)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
				x++;
			}
			y++;
			x = 0;
			_putchar ('\n');
		}
	}
	else
		_putchar('\n');
}
