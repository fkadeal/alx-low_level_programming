#include "holberton.h"

/**
 * _strcpy - afuction copies the string pointed to by src
 * @dest: Destination 
 * @src: Source
 */

char *_strcpy(char *dest, char *src)
{
int i;

for (i = 0; src[i]; i++)
dest[i] = src[i];

dest[i++] = '\0';

return (dest);
}
