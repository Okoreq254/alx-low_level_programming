#include <stdio.h>
/**
 * main - prints the lowercase alphabets in reverse
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	char q;

	for (q = 'z'; q >= 'a'; q--)
	{
		putchar(q);
	}
	putchar('\n');
	return (0);
}

