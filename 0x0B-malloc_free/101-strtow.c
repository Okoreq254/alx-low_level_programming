#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_wcount - counts number of words
 *@sw: string
 *
 *Return: int
 */
int _wcount(char *sw)
{
	int l, wc;

	l = 0, wc = 0;
	if (*(sw + l) == ' ')
	l++;
	while (*(sw + l))
	{
	if (*(sw + l) == ' ' && *(sw + l - 1) != ' ')
	wc++;
	if (*(sw + l) != ' '  && *(sw + l + 1) == 0)
	wc++;
	l++;
	}
	return (wc);
}
/**
 *_trspace - Moves adress to remove trailig whitespaces
 *@st: string
 *
 *Return: Pointer
 */
char *_trspace(char *st)
{
	while (*st == ' ')
	st++;
	return (st);
}
/**
 *strtow - splits a string into words
 *@str: string
 *
 *Return: Double Pointer
 */

char **strtow(char *str)
{
	char **s, *ts;
	int l, l2, wc, x, y, fr, z;

	if (str == NULL || *str == 0)
	return (0);
	fr = 0;
	wc = _wcount(str);
	if (wc == 0)
	return (0);
	s = malloc((wc + 1) * sizeof(char *));
	if (s == 0)
	return (0);
	ts = _trspace(str);
	for (x = 0; x < wc; x++)
	{
	l = 0;
	while (*(ts + l) != ' ' && *(ts + l) != 0)
	l++;
	s[x] = malloc((l + 1) * sizeof(char));
	if (s[x] == 0)
	{
	fr = 1;
	break;
	}
	for (y = 0, l2 = 0; l2 < l; l2++, y++)
	s[x][y] = *(ts + l2);
	s[x][y] = '\0';
	ts = _trspace(ts + l);
	}
	s[x] = NULL;
	if (fr == 1)
	{
	for (z = 0; z <= x; z++)
	free(s[z]);
	free(s);
	}
	return (s);
}
