#include <stdio.h>

/**
  * main - prints out the number of inputed arguments
  * @argc: arguement count
  * @argv: arguement array
  * Return: 0;
  */

int main(int argc, char *argv[]__attribute__((unused)))
{
		printf("%d\n", argc - 1);
		return (0);
}
