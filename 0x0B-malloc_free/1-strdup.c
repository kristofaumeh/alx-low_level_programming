#include <stdio.h>
#include <stdlib.h>
/**
  * _strdup - functions that returns a pointer to a
  * allocated space in memory
  * @str: input value of the duplicate string
  * Return: 0
  */
char *_strdup(char *str)
{
		size_t i, j;
		char *sat;

		if (str == NULL)
		{
		return (NULL);
		}
		for (i = 0; str[i] != '\0'; i++)

		sat = malloc(sizeof(char) * (i + 1));

		if (sat == NULL)
		return (NULL);

		for (j = 0; j <= i; j++)
		{
		sat[j] = str[j];
		}
		return (sat);
}
