#include "main.h"
#include <unistd.h>

/**
 * print_chessboard - prints 20 array of chessboard
 *
 * @a: chessboard array
 *
 * Return: void
 *
 */

void print_chessboard(char (*a)[8])
{
	int row, colmn;

	for (row = 0; row < 8; row++)
	{
		for (colmn = 0; colmn < 8; colmn++)
		{
			_putchar(a[row][colmn]);
		}
		_putchar('\n');
	}
}

