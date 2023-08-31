#include "main.h"
#include <stdio.h>
/**
* binary_to_uint - A function that covnverts a binary number to an int
* @b: Pointer to the string
* Return: The converted number.
*
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum, pow;
	int len;

	if (b == NULL)
		return (0);

	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}

	for (pow = 1, sum = 0, len--; len >= 0; len--, pow *= 2)
	{
		if (b[len] == '1')
			sum += pow;
	}

	return (sum);
}
