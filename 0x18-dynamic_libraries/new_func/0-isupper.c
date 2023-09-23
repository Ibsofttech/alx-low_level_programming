#include "main.h"

/**
  *_isupper - a function to check uppercase
  *letters
  *@c: character to be computed
  *Return: 1 for uppercase and 0 if not
  */

int _isupper(int c)
{
	if ((c >= 65 && c <= 90))
	{
		return (1);
	}
	else
		return (0);
}
