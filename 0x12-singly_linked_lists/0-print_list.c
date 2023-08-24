#include "lists.h"
#include <stdio.h>
/**
* print_list - A function that prints all the elements of a list
* @h: the input value of list to be printed
* Return: the number of nodes
*
*/
size_t print_list(const list_t *h)
{
	int i;

	if (h == NULL)
		return (0);
	for (i = 1; h->next != NULL; i++)
	{
		if (h->str == NULL)
			printf("[%lu] %s\n", h->len, "(nil)");
		else
				printf("[%lu] %s\n", h->len, h->str);
		h = h->next;
	}
	printf("[%lu] %s\n", h->len, h->str);
	return (i);
}
