#include <stdio.h>
#include <stdlib.h>
/**
  * create_array - creates an array of size and assign char c
  * @size: size of array
  * @c: size of char to assign
  * Return: a pointer to the array, or NULL if fail
  */
char *create_array(unsigned int size, char c)
{
		char *ptr;
		unsigned int i;

		ptr = malloc(sizeof(char) * size);
		if (size == 0 || ptr == NULL)
		return (NULL);

				for (i = 0; i < size; i++)
				ptr[i] = c;
				return (ptr);
}
