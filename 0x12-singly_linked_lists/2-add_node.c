#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: a pointer to the first node of list
 * @str: the string to be stored in nodes of the list
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *f_node;
	char *strg;

	f_node = malloc(sizeof(list_t));
	if (f_node == NULL)
		return (NULL);
	strg = strdup(str);
	if (strg == NULL)
	{
		free(f_node);
		return (NULL);
	}
	f_node->str = strg;
	f_node->len = strlen(str);
	f_node->next = *head;
	*head = f_node;
	return (f_node);
}
