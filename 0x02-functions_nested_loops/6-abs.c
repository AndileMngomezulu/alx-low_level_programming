#include "main.h"
/**
  * _abs - find the definate value of a number
  * @ab: it is the function parameter
  *Return: -ab or ab
  */

int _abs(int ab)
{
	if (ab < 0)
		return (-ab);
	else if (ab >= 0)
	{
		return (ab);
	}
	return (0);
}
