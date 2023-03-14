#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	int count1, count2, i = 0;
	char *arr;

	if (s1 == NULL || s2 == NULL)
		s1 = s2 = "";

	for (count1 = 0; count1 <= *s1; count1++)
	{
	}

	for (count2 = 0; count2 <= *s2; count2++)
	{
	}

	arr = malloc(sizeof(char) * (count1 + count2 + 1));

	if (arr == NULL)
		return (NULL);

	while (*s1)
	{
		arr[i] = *s1;
		i++;
		s1++;
	}

	while (*s2)
	{
		arr[i] = *s2;
		i++;
		s2++;
	}
	return (arr);
}
