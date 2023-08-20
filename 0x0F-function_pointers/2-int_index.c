#include "function_pointers.h"
#include <stdio.h>
/**
* int_index - a function that searches for an integer
* @size: the number of the array
* @array: the array
* @cmp: a pointer to the function to compare values
* Return: (0);
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == 0 || cmp == 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
