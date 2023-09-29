#include "main.h"
#include <stdio.h>

/**
  * main - it is the main function
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: void
  */
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
