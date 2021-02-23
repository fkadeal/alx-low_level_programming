#include "holberton.h"

/**
 *_strpbrk - a function locates the first bytes in the string
 *@s: pointr of char
 *@accept: pointer of char
 *Return: returns the first byte from @s wich in @accept or NUll(0)
 */

char *_strpbrk(char *s, char *accept)
{
int x, y;
for (x = 0; *s++; x++)
{
for (y = 0; accept[y]; y++)
{
if (*s == accept[y])
return (s);
}
}

return (0);
}
