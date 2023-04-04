#include <stdio.h>
#include "lists.h"
/**
 * print_listint - prints a list
 *
 * @h: head
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i;
	
	if (h != NULL)
	{
		for (i = 0; h; i++)
		{
			printf("%d \n", h->n);
			h = h->next;
		}
	}
	else
		return (0);
	return (i);
}
