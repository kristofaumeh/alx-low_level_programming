#include "main.h"
/**
  * _strlen_recursion - a functio that returns length of string
  * @s: string value
  * Return: The length of the string
  */
int _strlen_recursion(char *s)
{
		int strlen = 0;

		if (*s)
		{
		strlen++;
		strlen +=  _strlen_recursion(s + 1);
		}
		return (strlen);
}
