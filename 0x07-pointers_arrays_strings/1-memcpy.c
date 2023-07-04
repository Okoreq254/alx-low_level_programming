#include "main.h"

/**
 * _memcpy - It coppies the memory area
 *
 * @dest: char pointer
 *
 * @src: char pointer
 *
 * @n: unsigned int
 *
 * Return: dest
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int y;

	for (y = 0; n > 0; y++)
	{
		dest[y] = src[y];
		n -= 1;
	}
	return (dest);
}
#include "main.h"

/**
 * _memcpy - It coppies the memory area
 *
 * @dest: char pointer
 *
 * @src: char pointer
 *
 * @n: unsigned int
 *
 * Return: dest
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int y;

	for (y = 0; n > 0; y++)
	{
		dest[y] = src[y];
		n -= 1;
	}
	return (dest);
}

