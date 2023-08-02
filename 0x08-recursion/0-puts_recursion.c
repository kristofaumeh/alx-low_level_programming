#include "main.h"
/**
  * _puts_recursion - function that prints output of a string
  * @s: input value
  * Return: Always 0 Success
  */

void _puts_recursion(char *s)
{
		if (*s != '\0')
		{
		_putchar (s[0]);
		_puts_recursion(s + 1);
		}
		else
		{
				_putchar(10);
		}
}
