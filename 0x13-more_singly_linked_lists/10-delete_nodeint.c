#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index index of a linked list
 * @head: points to the head of list
 * @index: is the index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *crnt, *cpy = *head;

	if (cpy == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(cpy);
		return (1);
	}
	for (i = 0; i < (index - 1); i++)
	{
		if (cpy->next == NULL)
			return (-1);
		cpy = cpy->next;
	}
	crnt = cpy->next;
	cpy->next = crnt->next;
	free(crnt);
	return (1);
}
