#include <stdio.h>

/**
  * main - A program that prints all arguements it receives
  * @argc: input parameter
  * @argv: input parameter
  * Return: 0;
  */

int main(int argc,  char *argv[])
{
		int i;

		for (i = 0; i < argc; i++)
		{
		printf("%s\n", argv[i]);
		}
		return (0);
}
