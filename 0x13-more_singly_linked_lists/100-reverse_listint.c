#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t list.
 * @head: points to the head of list
 * Return: pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *behind, *front;

	if (head == NULL || *head == NULL)
		return (NULL);
	front = NULL;
	while ((*head)->next != NULL)
	{
		behind = (*head)->next;
		(*head)->next = front;
		front = *head;
		*head = behind;
	}

	(*head)->next = front;
	return (*head);
}
