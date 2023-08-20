#include "function_pointers.h"
#include <stdio.h>
/**
* print_name - a function that prints a name
* @name: string to be added to function
* @f: pointer to function
* Return: (0);
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;

	if (f == NULL)
		return;

	f(name);
}

