#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - it is the main function
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: void
  */
int main(int argc, char *argv[])
{
	int x1 = 0, x2 = 0;

	if (argc == 3)
	{
		x1 = atoi(argv[1]);
		x2 = atoi(argv[2]);
		printf("%d\n", x1 * x2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
