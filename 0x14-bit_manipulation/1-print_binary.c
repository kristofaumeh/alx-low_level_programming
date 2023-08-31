#include "main.h"
#include <stdio.h>
/**
* print_bi - print the binary representation of a number
* @n: the decimal input
* Return: void
*/
void print_bi(unsigned long int n)
{
	if (n == 0)
		return;
	print_bi(n >> 1);
	if ((n & 1) == 1)
		_putchar('1');
	if ((n & 1) == 0)
		_putchar('0');
}
/**
* print_binary - A function that prints the repesentation of a number
* @n: number to print out as binary
*
*/
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
	{
		print_bi(n);
	}
}


