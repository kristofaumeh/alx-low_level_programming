#include "lists.h"
/**
* free_listint - A function that frees a list
* @head: address of the first node of a list
*
*/
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
