#include "variadic_functions.h"
/**
* sum_them_all - sum all the given parameters
* @n: number of given arguments
* Return: sum
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	unsigned int i;

	va_list place;

	va_start(place, n);

	for (i = 0; i < n; i++)
	{
		if (n == 0)
		{
			return (0);
		}
		else
		{
			sum += va_arg(place, const unsigned int);
		}
	}
	va_end(place);
	return (sum);
}