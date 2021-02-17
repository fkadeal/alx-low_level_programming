#include "holberton.h"

/**
 * *puts_half - print string after half jump 1
 * **@str: is string param
 **/
void puts_half(char *str)
{
	int x = 0, i, j;

while (str[x])
x++;

	j = x / 2;
	for (i = j ; i <= x ; i++)
		_putchar(str[i]);

	_putchar('\n');
}
