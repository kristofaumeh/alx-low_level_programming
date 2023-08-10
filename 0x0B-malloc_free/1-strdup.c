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
		int i, j = 0;
		char *sat;

		if (str == NULL)
		{
		return (NULL);
		}
		i = 0;
		while (str[i] != '\0')
		i++;

		sat = malloc(sizeof(char) * (i + 1));

		if (sat == NULL)
		return (NULL);

		for (j = 0; str[j]; j++)
		{
		sat[j] = str[j];
		}
		return (sat);
}
