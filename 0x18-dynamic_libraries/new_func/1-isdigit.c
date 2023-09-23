#include "main.h"

/**
  *_isdigit - to check for numbers
  *@c: inreger to be comouted
  *Return: 1 for digits and 0 otherwise
  */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
		return (0);
}
