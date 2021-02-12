#include "holberton.h"

/**
 * a function that prints 10 times the numbers,
 * from 0 to 14, followed by a new line.
 */

void more_numbers(void)
{
int i;
int n;

for (n = 1; n <= 10; n++)
{
for (i = 0; i <= 14; i++)
{


_putchar('0' + i / 10);
_putchar('0' + i % 10);

}
_putchar('\n');
}
}
