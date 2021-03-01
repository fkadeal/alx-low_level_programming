#include "holberton.h"
/**
 * _memset - write memorey byte
 * @s: this is a pointer to the char
 * @b: is char
 * @n: unsigned int
 * Return: returns pointer to the memory
 **/

char *_memset(char *s, char b, unsigned int n)
{
	/*
	 * _memset - write memorey byte
	 */

	unsigned int c;

	for (c = 0 ; c < n ; c++)
	{
		s[c] = b;
	}
	return (s);
}
