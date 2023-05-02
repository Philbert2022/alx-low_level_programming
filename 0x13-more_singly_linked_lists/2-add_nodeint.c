#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: points to the first node of list
 * @n: new element to be stored
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *first;

	first = malloc(sizeof(listint_t));
	if (first == NULL)
		return (NULL);
	first->n = n;
	first->next = *head;

	*head = first;
	return (first);
}
