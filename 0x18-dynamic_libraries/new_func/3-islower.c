#include "main.h"
/**
  * _islower - Entry point
  *@c: character considered
  * Return: 1 for lowercase or 0 for others
  */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
