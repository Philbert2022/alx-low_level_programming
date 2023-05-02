#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - frees a listint_t list
 * @head: - point to the first node of list
 */

void free_listint(listint_t *head)
{
	listint_t *nxt;

	while (head)
	{
		nxt = head->next;
		free(head);
		head = nxt;
	}
}
