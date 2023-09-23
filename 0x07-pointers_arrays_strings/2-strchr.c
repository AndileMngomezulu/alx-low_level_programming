#include "main.h"
#include <stdio.h>

/**
  * _strchr - it is the entry point
  * @s: input
  * @c: input
  * Return: 0 if successful
  */
char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
			return (s + x);
	}
	return (NULL);
}
