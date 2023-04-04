#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * delete_nodeint_at_index - a function that delete a node at index
  * @head: head of the list
  * @index: location of the node to delete
  * Return: pointer to head of list
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int a;
	listint_t *curr, *subsequent;

	if (!head || !*head)
		return (-1);
	curr = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(curr);
		return (1);
	}
	for (a = 0; a < (index - 1); a++)
	{
		curr = curr->next;
		if (curr == NULL)
			return (-1);
	}
	subsequent = curr->next;
	curr->next = subsequent->next;
	free(subsequent);
	return (1);
}
