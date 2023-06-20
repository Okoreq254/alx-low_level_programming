#include "main.h"

/**
 * print_alphabet_x10 - Prints the lowercase alphabet 10 times
 * Return: 0
*/
void print_alphabet_x10(void)
{
	char y;
	int x = 0;

	while (x <= 9)
	{
		for (y = 'a'; y <= 'z'; y++)
		{
			_putchar(y);
			_putchar('\n');
		}
	}
}

