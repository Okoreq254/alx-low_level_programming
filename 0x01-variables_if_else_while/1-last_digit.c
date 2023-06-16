#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - It prints the last digit of a number that is randomly generated
 *
 * whether the number is greater than 5, less than 6 or equal to 0
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if ((n % 10) > 5)
	{
		printf("Last digit of %d is %d and the digit is greater than 5\n", n % 10);
	}
	else if ((n % 10) < 6 && (n % 10) != 0
	{
		printf("Last digit of %d is %d and the digit is less than 6\n", n % 10);
	}
	else 
	{
		printf("Last digit of %d is %d and the digit is 0\n", n % 10);
	}
	return (0);
}

