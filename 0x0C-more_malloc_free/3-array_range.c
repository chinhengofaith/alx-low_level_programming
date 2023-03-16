#include <stdlib.h>
#include "main.h"
/**
 * array_range - get len, malloc * len
 * loop size of len to insert min++ into new arr
 * @min: min input
 * @max: max input
 * Return: pointer to new arr of ints
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, len;

	if (min > max)
		return (NULL);

	for (len = 0; len < (max - min); len++)
		;

	ptr = malloc(sizeof(int) * (len + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		ptr[i] = min++;
	}

	return (ptr);
}
