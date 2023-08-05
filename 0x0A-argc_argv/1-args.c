#include <stdio.h>

/**
  * main - prints out name of program
  * @argc: arguement count
  * @argv: arguement array
  * Return: 0;
  */

int main(int argc, char *argv[])
{
int a;
		if (argc > 1)
		for (a = 0; a < argc; a++)
		{
		printf("%s\n", argv[a]);
		}
		return (0);
}
