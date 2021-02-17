#include "holberton.h"

/**
 *  **rev_string: a fnctioin that reverses a string.
 *   **@s: string char *
 *    */

void rev_string(char *s)
{
	
	int x, i;
	x = 0;
	char *t = s, *d = s, p;
	
	while (s[x])
		x++;
	
	for (i = 0; i < x - 1; i++)
	{
		d++;
}
	
	for (i = 0; i < x--; i++)
	{
		p = *d;
		*d = *t;
		*t = p;
		t++;
		d--;
	}/*
	int i, j;
	char sriv[10];
	j = 0;
	for (i = 8 ; i >= 0 ; i--)
	{
		sriv[j] = s[i];
		j++;
	}
	for (i = 0 ; i <= 10 ; i++)
	{
		s[i] = sriv[i];
	}*/
}
