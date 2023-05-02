#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: points to the head of the listint_t list
 * Return: - returns the head node’s data (n)
 *         - if the linked list is empty return 0
 */

int pop_listint(listint_t **head)
{
	listint_t *crrnt;
	int num;

	if (*head == NULL)
		return (0);
	num = (*head)->n;
	crrnt = (*head)->next;
	free(*head);
	*head = crrnt;
	return (num);
}
