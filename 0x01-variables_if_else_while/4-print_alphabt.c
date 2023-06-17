#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * main - print all letter aprt from q and e
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int y;

	for (y = 97; y < 123; y++)
	{
		if (y != 101 && y != 113)
		{
			putchar(y);
		}
	}
	putchar('\n');
	return (0);
}

