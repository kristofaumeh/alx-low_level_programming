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
	size_t x;

	if (h == NULL)
		return (0);

	for (x = 1; h->next != NULL; x++)
	{
		if
		(h->str == NULL)
			printf("[%ld] %s\n", h->len, "(nil)");
		else
				printf("[%ld] %s\n", h->len, h->str);
		h = h->next;
	}
	printf("[%ld] %s\n", h->len, "(nil)");
	return (x);
}
