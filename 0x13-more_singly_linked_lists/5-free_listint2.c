#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t list and sets head to NULL
 * @head: points to the head
 */

void free_listint2(listint_t **head)
{
	listint_t *crrnt;

	if (head == NULL)
		return;
	while (*head)
	{
		crrnt = (*head)->next;
		free(*head);
		*head = crrnt;
	}
	head = NULL;
}
