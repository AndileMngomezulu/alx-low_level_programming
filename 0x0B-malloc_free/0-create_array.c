#include "main.h"
#include <stdlib.h>

/**
  * create_array - creates an array of chars
  * @size: size of the array
  * @c: char to fill in the array
  *
  * Return: array filled
  */
char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *s;

		if (size == 0)
			return (NULL);

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
	{
		s[x] = c;
	}

	return (s);
}
