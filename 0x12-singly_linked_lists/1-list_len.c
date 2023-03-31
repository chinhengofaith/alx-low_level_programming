#include "lists.h"
#include <stdio.h>

/**
 * list_len - Return number of elements
 *
 * @h: Points to struct
 *
 * Return: Num of elements
 */

size_t list_len(const list_t *h)
{
	unsigned int c = 0;
	const list_t *list;

	list = malloc(sizeof(list_t));

	list = h;

	if (list == NULL)
	{
		return (0);
	}
	while (list != NULL)
	{
		list = list->next;
		c++;
	}
	return (c);
}
