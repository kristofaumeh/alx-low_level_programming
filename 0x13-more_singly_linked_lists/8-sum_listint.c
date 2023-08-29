#include "lists.h"
/**
* sum_listint - A function that returns the sum of all the data of a
* linked list
* @head: Pointer to the list
* Return: sum of list
*
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head !=  NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
