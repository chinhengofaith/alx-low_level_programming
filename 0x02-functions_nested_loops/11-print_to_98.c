#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - a function that prints all natural numbers from a to 98
 * user input's number prints to 98, regardless < 98 or > 98
 * @a: number input
 * Return: Always 0 (Success)
 */
void print_to_98(int a)
{
	if (a < 98)
	{
		while (a <= 98)
		{
			printf("%d", a);
			if (a != 98)
			{
				printf(", ");
			}
			a++;
		}
	}
	else if (a > 98)
	{
		while (a >= 98)
		{
			printf("%d", a);
			if (a != 98)
			{
				printf(", ");
			}
			a--;
		}
	}
	else
	{
		printf("98");
	}
	printf("\n");
}
