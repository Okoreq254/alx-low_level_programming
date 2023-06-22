#include "main.h"
/**
 * _isdigit -  checks if c is a digit.
 *
 * @c: The character to be checked if digit.
 * Return: (1) if c is a character, (0) otherwise.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
