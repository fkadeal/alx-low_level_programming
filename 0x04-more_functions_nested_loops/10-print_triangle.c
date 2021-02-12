#include "holberton.h"
void print_triangle(int size)
{
int f, y, k;

if (size > 0)
for (f = 0; f < size; f++)
{
for (y = size - f; y > 1; y--)
_putchar(' ');

for (k = 0; k <= f; z++)
_putchar('#');

_putchar('\n');
}
else
_putchar('\n');
}
