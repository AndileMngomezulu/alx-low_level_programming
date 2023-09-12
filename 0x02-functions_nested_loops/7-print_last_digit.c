#include "main.h"
/**
  * print_last_digit - it prints last digit
  * @cd: it is the function parameter
  * Return: j
  */

int print_last_digit(int cd)

{
	int j;

	j = cd % 10;
	if (j < 0)
		j = -j;
	_putchar(j + '0');
	return (j);
}
