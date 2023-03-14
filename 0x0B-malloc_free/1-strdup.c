#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup -  function that returns a pointer to a newly allocated space
 * @str: string to copy
 * Return: pointer to array or null
 */
char *_strdup(char *str)
{
	char *arr;
	int a, b;
	int coun = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (a = 0; str[a] != '\0'; a++)
	{
		coun = coun + 1;
	}

	arr = malloc(sizeof(char) * coun + 1);

	if (arr == NULL)
	{
		return (NULL);
	}
	for (b = 0; str[b] != '\0' ; b++)
	{
		arr[b] = str[b];
	}

	arr[b] = '\0';

	return (arr);
}
