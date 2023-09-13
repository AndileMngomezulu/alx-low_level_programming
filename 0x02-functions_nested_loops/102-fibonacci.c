#include <stdio.h>

/**
  * main - it is the main function
  * Return: 0
  */

int main(void)
{
	unsigned long int term1 = 1;
	unsigned long int term2 = 2;
	unsigned long int next;
	int x;

	printf("%lu", term1);
	for (x = 1 ; x < 50 ; x++)
	{
		printf("%lu", term2);
		next = term1 + term2;
		term1 = term2;
		term2 = next;
		if (x != 49)
			printf(", ");
	}
	printf("\n");
	return (0);
}
