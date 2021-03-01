#include "holberton.h"

/**
 *_memcpy - it copy memory area from src to dest
 *@dest: char type points to char
 *@src: char , points to char
 *@n: int type
 *Return: pointr* to dest
 **/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int c;
for (c = 0 ; c < n ; c++)
{
dest[c] = src[c];
}
return (dest);

}
