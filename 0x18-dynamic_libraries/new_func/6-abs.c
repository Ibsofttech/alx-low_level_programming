#include "main.h"
/**
  * _abs - Entry point
  * @i: intergers are considered
  *Return: absolute value of a number
 */

int _abs(int i)
{
	if (i < 0)
	{
		int abs;

		abs = i * -1;
		return (abs);
	}
	return (i);
}
