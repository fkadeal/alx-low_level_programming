#include "holberton.h"
/**
 * _atoi - Converts all stia string to an integer.
 * @s: string param
 * Return: int
 */

int _atoi(char *s)
{
int sign = 1, i;
unsigned int num = 0;

for (i = 0; s[i]; i++)
{
if (s[i] == '-')
sign *= -1;

else if (s[i] >= '0' && s[i] <= '9')
num = (num * 10) + (s[i] - '0');

else if (num > 0)
break;
}

return (num *sign);
}
