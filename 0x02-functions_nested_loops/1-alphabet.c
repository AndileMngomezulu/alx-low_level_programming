#include "main.h"

/**
  * print_alphabet - print the alphabets in lower case
  *
  * Return: always 0
  */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');

}
