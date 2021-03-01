#include "holberton.h"

/**
 * _strncat - concatenates two strings
 * @n: int
 * @dest: string
 * @src: string
 * Return: string
 */

char *_strncat(char *dest, char *src, int n)
{
int x = 0, i;

while (dest[x])
x++;

for (i = 0; i < n && src[i]; i++)
dest[x++] = src[i];

return (dest);
}
