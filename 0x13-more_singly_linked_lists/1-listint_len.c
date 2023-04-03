#include <stdio.h>
#include "lists.h"
/**
  * listint_len - returns the number of elements in a list.
  * @h: head of list
  * Return: number of nodes in the list
  */
size_t listint_len(const listint_t *h)
{
	size_t i;

	if (h != NULL)
	{
		for (i = 0; h; i++)
		{
			h = h->next;
		}
	}
	else
		return (0);

	return (i);
}
