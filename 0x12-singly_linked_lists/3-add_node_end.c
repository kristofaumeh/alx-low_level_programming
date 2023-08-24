#include "lists.h"
int len(const char *str);
list_t *create_node(const char *str);
/**
* add_node_end - A function that adds node to the newly craeted list
* @head: The head of the linked lists
* @str: the new node to be added
* Return: The address of the new elements
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *new_node;

	temp = *head;
	if (head == NULL)
		return (NULL);
	new_node = create_node(str);
	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new_node;
	return (*head);
}
/**
* create_node - a function that declares/creates nodes
* @str: string to be created in the new node
* Return: pointer to the newly allocated memory
*/
list_t *create_node(const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = len(str);
	new_node->next = NULL;
	return (new_node);
}
/**
* len - length of string
* @str: address of string to be added
* Return: amount of length
*/
int len(const char *str)
{
	int i;

	if (str == NULL)
		return (0);

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

