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
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h.next;
	}
	return (sizeof(h));
}
