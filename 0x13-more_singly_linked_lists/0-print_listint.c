#include <stdio.h>
#include "lists.h"
/**
* print_listint - A function that prints all the elements of a list
* @h: input value of list to be printed
* Return: The number of nodes printed
*
*/
size_t print_listint(const listint_t *h)
{
	size_t count;

	if (h == NULL)
		return (0);
	for (count = 0; h != NULL; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
