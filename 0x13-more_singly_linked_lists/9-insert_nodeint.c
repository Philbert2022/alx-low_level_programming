#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: points to the head of list
 * @idx: is the index of the list where the new node should be added
 * @n: data to be inserted
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *node, *cpy = *head;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	if (idx == 0)
	{
		node->next = cpy;
		*head = node;
		return (node);
	}
	while (i <= idx)
	{
		if (cpy == NULL)
			return (NULL);
		if (i == idx - 1)
		{
			node->next = cpy->next;
			cpy->next = node;
			return (node);
		}
		cpy = cpy->next;
		i++;
	}
	return (NULL);
}
