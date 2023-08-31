#include "main.h"

/**
 * set_bit - A function that sets value of a bit to 1 at a given index
 * @n: decimal number passed by pointer
 * @index: index position to change, starting from 0
 * Return: 1 if sucessful, -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > sizeof(unsigned int) * 8)
		return (-1);

	i = 1;
	i = i << index;
	*n = ((*n) | i);
	return (1);
}
