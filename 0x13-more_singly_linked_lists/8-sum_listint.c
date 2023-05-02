#include "lists.h"
#include <stdio.h>

/**
 * sum_listint - calculates sum of all the data (n) of a listint_t linked list
 * @head: point to the head of list
 * Return: - returns the sum of all the data (n) of the list
 *         - if the list is empty, return 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
