#include "holberton.h"

/**
 *_strchr - compare string to char
 *@s: pointer to char
 *@c: char
 *Return: pointer char of @s
 */
char *_strchr(char *s, char c)
{
while (*s++)
{
if (*s == c)
return (s);
}
return (0);
}
