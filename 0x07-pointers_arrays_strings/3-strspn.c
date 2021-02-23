#include "holberton.h"

/**
 *_strspn - is afunction gets length of prifix substring
 *@s: is pointer to char
 *@accept: is pointer to char
 *Return: returns the number of byte @s have from @accept
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int x, y;
for (x = 0; s[x]; x++)
{
for (y = 0; accept[y] != s[x]; y++)
{
if (!accept[y])
return (x);
}
}
return (x);
}
