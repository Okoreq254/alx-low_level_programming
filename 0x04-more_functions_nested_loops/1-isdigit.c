#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks if the character is a digit.
 *
 * @c: The character to be checked
 *
 * Return: Return to 1 if it is a digit and 0 if otherwise
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

