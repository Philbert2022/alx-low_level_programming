#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t list
 * @head: point to the first node of list
 */

void free_list(list_t *head)
{
	list_t *nxt, *crnt;

	crnt = head;
	while (crnt)
	{
		nxt = crnt->next;
		free(crnt->str);
		free(crnt);
		crnt = nxt;
	}
}
