#include "function_pointers.h"
#include <stdio.h>
/**
* array_iterator - a function that executes a function given as
* a parameter on each element of an array.
* @size: the size of the array
* @action: a pointer to the function.
* @array: array
* Return: (0);
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
