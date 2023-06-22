#include "main.h"
/**
 * _isupper - Checks whether a character is uppercase or not.
 *
 * @c: The character to be checked for uppercase.
 * Return: (1) if c is an uppercase character, (0) otherwise.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
