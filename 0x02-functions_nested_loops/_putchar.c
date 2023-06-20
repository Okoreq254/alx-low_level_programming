#include <unistd.h>
/**
 * _putchar - writes the character to the standard output
 *
 * @c: The character to print
 *
 * Return: 0 (success)
 * Return: -1 (error)
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

