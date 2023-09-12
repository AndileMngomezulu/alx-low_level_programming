#include "main.h"
#include <stdio.h>
/**
  * times_table - it prints the nine times table
  * Return: void
  */
void times_table(void)
{
	int t, m, result;

	for (t = 0 ; t < 10 ; t++)
	{
		for (m = 0 ; m < 10; m++)
		{
			result = t * m;
			if (m == 0)
				printf("%d, ", result);
			else
			{
				printf("%2d", result);
				if (m != 9)
					printf(", ");
			}
		}
		printf("\n");
	}
}
