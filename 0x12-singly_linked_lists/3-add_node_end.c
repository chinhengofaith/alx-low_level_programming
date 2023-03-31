#include "lists.h"
#include <stdio.h>
/**
 * _strlen - function that Adds node to end of linked list
 *
 * @str: Pointer to struct pointer
 *
 * Return: Length of string
 */

int _strlen(const char *str)
{
	unsigned int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

/**
 * add_node_end -function that Adds node to end of linked list
 *
 * @head: Double Pointer
 *
 * @str: Pointer to struct pointer
 *
 * Return: address of the new element, or NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *list, *endnode;

	endnode = malloc(sizeof(list_t));

	if (endnode == NULL)
	{
		return (NULL);
	}
	endnode->str = strdup(str);
	endnode->len = _strlen(str);
	endnode->next = NULL;

	if (*head == NULL)
	{
		*head = endnode;
	}
	else
	{
		list = *head;

		while (list->next)
		{
			list = list->next;
		}
		list->next = endnode;
	}
	return (endnode);
}
