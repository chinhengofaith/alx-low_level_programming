#include <string.h>
#include "main.h"
#include <stdio.h>

/**
  * reverse_array -function that Reverses the content of an array of integers
  * @a: An array of integers
  * @n: Number of elements to swap
  *
  * Return: empty
  */
void reverse_array(int *a, int n)
{
	int *p, i, c, k;

	p = a;

	for (i = 1; i < n; i++)
	{
		p++;
	}

	for (k = 0; k < i / 2; k++)
	{
		c = a[k];
		a[k] = *p;
		*p = c;
		p--;
	}
}
