#include "lists.h"
/**
  * sum_listint - sums all elements of a list
  * @head: pointer to the head of the list
  * Return: sum of all elements
  */
int sum_listint(listint_t *head)
{
	int add;

	for (add = 0; head; add += head->n, head = head->next)
		;
	return (add);
}
