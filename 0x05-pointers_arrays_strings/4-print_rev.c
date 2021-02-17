#include "holberton.h"

/*
 *print_rev - a function to make string reverse
 */

void print_rev(char *s)
{
int qcount = 0;
while (s[qcount])
{
qcount++;
}
while (--qcount >= 0)
_putchar(s[qcount]);

_putchar('\n');
}
