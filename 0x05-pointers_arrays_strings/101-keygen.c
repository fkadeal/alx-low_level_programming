#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - its generates random valid passwords for the program 101-crackme
 * Return: 0 on
 */

int main(void)
{
char abv;
int sum;

srand(time(NULL));
while (sum <= 2645)
abv = rand() % 128,
sum += abv,
putchar(abv);

putchar(2772 - sum);
return (0);
}
