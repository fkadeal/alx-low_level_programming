#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success).
*/
int main(void)
{
for (int n = 0; n < 10; n++)
{
putchar('0' + n);
if (n == 9)
break;
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}

