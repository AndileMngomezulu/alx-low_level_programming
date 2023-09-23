#include "main.h"

/**
  * _memset - Entry point
  * @s: pointed destination
  * @b: constant byte
  * @n: bytes
  * Return: always 0 if success
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;
	return (s);
}
