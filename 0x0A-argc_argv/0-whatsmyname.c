#include <stdio.h>

/**
  * main - Entry point
  * Description: prints the name of the program
  * @argc: argument count
  * @argv: array of arguments
  * Return: 0;
  */

int main(int argc __attribute__((unused)), char *argv[])
{
		printf("%s\n", *argv);
		return (0);
}
