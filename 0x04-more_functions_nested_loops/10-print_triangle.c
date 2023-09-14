#include "main.h"
/**
  * print_triangle - prints triangle
  * @size: size of the triangle
  */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int b, c;

	for (b = 1 ; b <= size ; b++)
	{
		for (c = b ; c < size ; c++)
		{
			_putchar(' ');
		}
		for (c = 1 ; c <= b ; c++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	}
}
