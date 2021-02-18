#include "holberton.h"
#include "stdio.h"
/**
 * _strcat - concatination for 2 string arrey
 * @dest:is destination parameter
 * @src: is source parameter
 * return: concatineted value
 */
char *_strcat(char *dest, char *src)
{
char *re = dest;

while (*dest)
dest++;

while (*src)
*dest++ = *src++;

*dest = *src;

return (re);
}
