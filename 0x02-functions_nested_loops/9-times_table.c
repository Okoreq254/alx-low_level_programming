#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 * Return: Empty output
 */
void times_table(void)
{
	int i, j, result;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = i * j;
			_putchar('0' + result);

			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

