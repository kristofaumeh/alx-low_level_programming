#include <stdio.h>
#include <stdlib.h>
/**
  * str_concat - function that concatenates two strings
  * @s1: input value of first string
  * @s2: input value of second string
  * Return: 0;
  */
char *str_concat(char *s1, char *s2)
{
		size_t len1, len2, i, j;
		char *ptr;

		if (s1 == NULL)
		{
		s1 = "";
		}

		if (s2 == NULL)
		{
		s2 = "";
		}
		for (len1 = 0; s1[len1] != '\0'; len1++)

		for (len2 = 0; s2[len2] != '\0'; len2++)

		ptr = malloc(sizeof(char) * (len1 + len2 + 1));

		if (ptr == NULL)
		{
		free(ptr);
		return (NULL);
		}

		for (i = 0; i < len1; i++)
		{
		ptr[i] = s1[i];
		}

		for (j = 0; j <= len2; j++)
		{
		ptr[i] = s2[j];
		i++;
		}
		return (ptr);
}
