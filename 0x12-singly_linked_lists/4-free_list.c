#include "lists.h"
#include <stdlib.h>
/**
* free_list - frees the list
* @head: list to be freed
*/
void free_list(list_t *head)
{
	list_t *recent_node;

	while ((recent_node = head) != NULL)
	{
		head = head->next;
		free(recent_node->str);
		free(recent_node);
	}
}
