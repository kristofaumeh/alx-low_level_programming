#include "main.h"
#include <stddef.h>

/**
 * clear_bit - A function that sets the value of a bit to 0.
 * at a given index.
 * @n: pointer of an unsigned long int.
 * @index: index of the bit.
 *
 * Return: 1 if it worked, -1 if it didn't.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	i = 1;
	i = i << index;
	if (index > sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);
	if ((*n >> index & 1) == 1)
		*n = i ^ *n;

	return (1);
}
