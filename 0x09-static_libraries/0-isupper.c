#include "main.h"
/**
 * _isupper - Checks for uppercase character
 * @c: the int to be checked
 *
 * Return: 1 if uppercase
 * Else returns: 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
