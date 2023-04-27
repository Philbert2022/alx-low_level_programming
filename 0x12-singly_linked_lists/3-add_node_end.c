#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: points to the first node of lisst
 * @str: the string to be stored in a node
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *strd;
	list_t *elem, *lst;

	elem = malloc(sizeof(list_t));
	if (elem == NULL)
		return (NULL);
	strd = strdup(str);
	if (strd == NULL)
	{
		free(elem);
		return (NULL);
	}

	elem->str = strd;
	elem->len = strlen(str);
	elem->next = NULL;

	if (*head == NULL)
		*head = elem;
	else
	{
		lst = *head;
		while (lst->next != NULL)
			lst = lst->next;
		lst->next = elem;
	}
	return (*head);
}
