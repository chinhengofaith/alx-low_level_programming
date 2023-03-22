#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for an integer
 * @array: int pointer
 * @size: int
 * @cmp: function pointer
 * Return: void
 */

int int_index(int *array, int size, int (*cmp)(int))
{

	int a;

	if (array && size && cmp)
	{
		for (a = 0; a < size; a++)
		{
			if (cmp(array[a]))
			{
				return (a);
			}
		}
	}
	return (-1);
}
