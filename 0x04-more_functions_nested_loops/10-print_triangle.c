#include <stdio.h>
/**
  * print_triangle - prints triangle
  * @size: size of the triangle
  */
void print_triangle(int size)
{
	int b, c;

	if (size > 0)
	{
		for (b = 0 ; b < size ; b++)
		{
			for (c = 0 ; c < size ; c++)
			{
				if (c < size - (b + 1))
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}

				else
				{
					_putchar('\n');
				}

				else
				{
					_putchar('\n');
				}
			}
		}
	}
}
