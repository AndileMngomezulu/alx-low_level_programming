#include <stdio.h>
/**
  * main - it is the main function
  * Return: 0
  */

int main(void)
{
	int sum = 0;
	int x;

	for (x = 0 ; x < 1024 ; x++)
	{
		if (x % 3 == 0 || x % 5 == 0)
			sum = sum + x;
	}
	printf("%d\n", sum);
	return (0);
}
