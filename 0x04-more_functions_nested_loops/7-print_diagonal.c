#include "main.h"
/**
  * print_diagonal - prints diagonally
  *
  * @n: number of inputs
  */
void print_diagonal(int n)
{
	int x, y;

	for (x = 0 ; x < n ; x++)
	{
		if (n > 1)
			for (y = 0 ; y < x ; y++)
			{
				_putchar(' ');
			}
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
