#include "main.h"

/**
 * _strspn - gets the lengths of the prefix substring
 *
 * @s: char pointer
 *
 * @accept: char pointer
 *
 * Return: s
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int add1, add2;

	for (add1 = 0; s[add1] != '\0'; add1++)
	{
		for (add2 = 0; s[add2] != '\0'; add2++)
		{
			if (s[add1] == accept[add2])
			{
				break;
			}
		}
		if (!(accept[add2]))
		{
			break;
		}
	}
	return (add1);
}#include "main.h"

/**
 * _strspn - gets the lengths of the prefix substring
 *
 * @s: char pointer
 *
 * @accept: char pointer
 *
 * Return: s
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int add1, add2;

	for (add1 = 0; s[add1] != '\0'; add1++)
	{
		for (add2 = 0; s[add2] != '\0'; add2++)
		{
			if (s[add1] == accept[add2])
			{
				break;
			}
		}
		if (!(accept[add2]))
		{
			break;
		}
	}
	return (add1);
}
