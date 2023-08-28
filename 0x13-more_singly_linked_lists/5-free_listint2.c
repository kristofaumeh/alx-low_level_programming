#include "lists.h"
/**
* free_listint2 - A function that frees all nodes in a list and
* returns the head to null
* @head: address to the first node on the list
*
*/
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
