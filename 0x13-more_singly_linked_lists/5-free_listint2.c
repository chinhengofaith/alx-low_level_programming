#include "lists.h"
#include <stdlib.h>
/**
  * free_listint2 - Frees a list and sets its head to NULL
  * @head: double pointer to head of list
  */
void free_listint2(listint_t **head)
{
	listint_t *a, *ptr;

	if (head == NULL)
		return;
	ptr = *head;
	while (ptr != NULL)
	{
		a = ptr;
		ptr = ptr->next;
		free(a);
	}
	*head = NULL;
}
