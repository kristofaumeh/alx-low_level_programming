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
		char *strdout;

		if (str == NULL)
		{
		return (NULL);
		}
		for (i = 0; str[i] != '\0'; i++)

		strdout = malloc(sizeof(char) * (i + 1));

		if (strdout == NULL)
		return (NULL);

		for (j = 0; j <= i; j++)
		{
		strdout[j] = str[j];
		}
		return (strdout);
}
