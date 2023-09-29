#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
	unsigned int j, sum = 0;
	char *e;

	if (argc > 1)
	{
		for (x = 1; x < argc; x++)
		{
			e = argv[x];
			for (j = 0; j < strlen(e); j++)
			{
				if (e[j] < 48 || e[j] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(e);
			e++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
