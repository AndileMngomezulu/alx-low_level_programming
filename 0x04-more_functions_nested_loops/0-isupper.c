#include "main.h"
/**
  * _isupper - checks fou uppercase
  *
  * @c: input
  *
  *Return: 1 and 0 if false
  *
  */
int _isupper(int c)
{
	if (c == 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
