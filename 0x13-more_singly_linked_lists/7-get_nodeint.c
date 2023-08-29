#include "lists.h"
/**
* get_nodeint_at_index - a function that returns the nth node of a linked list
* @head: adddress of the first node on the list
* @index: the beginning of the node
* Return: address of the node
*
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t n = 0;

	if (head == NULL)
		return (NULL);
	for (n = 0; n < index; n++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
