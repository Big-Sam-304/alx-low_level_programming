#include "main.h"
/**
 * _isdigit - Check code
 * @c: int to be checked
 * Return: 1 if c is a digit 0 - 9
 * else Return: 0
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
