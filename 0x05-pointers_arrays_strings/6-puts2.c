#include "holberton.h"

/**
**puts2 - print jump 1
**@str: is string param
*/
void puts2(char *str)
{
int x = 0, i;
while (str[x])
x++;

for (i = 0 ; i <= x ; i += 2)
_putchar(str[i]);

_putchar('\n');
}
