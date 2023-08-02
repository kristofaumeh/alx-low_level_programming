#include "main.h"
/**
  * _print_rev_recursion - funtion that prints a string in reverse
  * @s: input value
  * Return: Always 0 (Success)
  */
void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
