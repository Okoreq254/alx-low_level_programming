#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: base 10 number
 * @index: index to print
 *
 * Return: value of the bit at index index or -1 if an error occurred
 *
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);


	unsigned long int bit = n >> index;


	return (bit & 1);
}
