#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: base 10 number
 *
 * Return: No return
 *
 */

void print_binary(unsigned long int n)
{
	int bit, size = sizeof(unsigned long int) * 8;
	int leading_zero = 1;

	for (bit = size - 1; bit >= 0; bit--)
	{
		if ((n >> bit) & 1)
		{
			leading_zero = 0;
			_putchar('1');
		}
		else if (!leading_zero)
		{
			_putchar('0');
		}
	}

	if (leading_zero)
		_putchar('0');
}
