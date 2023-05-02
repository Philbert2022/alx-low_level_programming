#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: points to the head of list
 * @n: an integer element to be contained in new node
 * Return: address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last, *end;

	last = malloc(sizeof(listint_t));
	if (last == NULL)
		return (NULL);
	last->n = n;
	last->next = NULL;

	if (*head == NULL)
		*head = last;
	else
	{
		end = *head;
		while (end->next != NULL)
			end = end->next;
		end->next = last;
	}
	return (last);
}
