#include <unistd.h>

/**
 * _putchar - Writes a character to the standard output
 *
 * @c: The character to be written
 *
 * Return: It returns the written character on success and returns -1 on error and sets errno appropriately
 *
 */

int _putchar(char c)
{
	return write(1, &c, 1);
}

