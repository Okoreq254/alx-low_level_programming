#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 * Return: Empty output
 */
void times_table(void)
{
	int x, y, result;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			result = x * y;

			if (y != 0)
			{
				_putchar(',');
				_putchar(' ');

				if (result < 10)
					_putchar(' ');
			}

			if (result >= 10)
			{
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
			}
			else
			{
				_putchar(result + '0');
			}
		}
		_putchar('\n');
	}
}

