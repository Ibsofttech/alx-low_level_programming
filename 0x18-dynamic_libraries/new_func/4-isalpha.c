#include "main.h"
/**
  * _isalpha - Entry point
  * @c: character to consider
  * Return: 1 for lower or uppercase or 0 if not
  */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
