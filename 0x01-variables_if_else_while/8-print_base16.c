#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success).
*/
int main(void)
{

for (int n = 0; n < 10; n++)
putchar('0' + n);
for (char l = 'a'; l <= 'f'; l++)
putchar(l);
putchar('\n');
return (0);
}

