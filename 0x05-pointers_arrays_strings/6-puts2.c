#include "holberton.h"
/**
*puts2 - is functon that juump one to where
*/
void puts2(char *str)
{
int l = 0, leng = 0;
while (str[leng])
_putchar(str[l]);
l=leng + 2;

}
