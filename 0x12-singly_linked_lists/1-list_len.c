#include "lists.h"
#include <stdio.h>
/**
* list_len - A function that returns the elements in a linked list
* @h: The linked list
* Return: Number of nodes in the list
*/
size_t list_len(const list_t *h)
{
	int x;

	if (h == NULL)
		return (0);

	for (x = 1; h->next != NULL; x++)
		h = h->next;
	return (x);
}
