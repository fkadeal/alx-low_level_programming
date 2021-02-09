#include "holberton.h"

/**
  *9-times_table.c
 * times_table - prints time table, starting with 0
*/

void times_table(void)
{
int n, i;
for (n = 0; n <= 9; n++)
{
  _putchar('0');
for (i = 1; i <= 9; i++)
{
  int r = n * i;
  _putchar(',');
  _putchar(' ');
(r <= 9) ?
_putchar(' ') :
_putchar('0' + (r / 10));
_putchar('0' + (r % 10));
}
_putchar('\n');
}
}
