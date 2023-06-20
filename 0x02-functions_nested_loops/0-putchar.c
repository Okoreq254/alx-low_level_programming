#include <unistd.h>
/**
 * _putchar - writes the character to the output
 *
 * @c: The character to be written
 *
 * Return: 0 on succes , -1 on Error
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

