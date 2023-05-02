#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: points to the head of the list
 * @index: the index of the node, starting at 0
 * Return: - the nth node of a listint_t linked list
 *         - if the node does not exist, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i <= index; i++)
	{
		if (head == NULL)
			return (NULL);
		if  (i == index)
			return (head);
		head = head->next;
	}
	return (NULL);
}
