#include "main.h"
/**
  * _isdigit - inspect parameter
  *
  * @c: parameter
  * Return: 1 if number and 0 if otherwise
  */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
