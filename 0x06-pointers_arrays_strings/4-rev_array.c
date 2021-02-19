#include "holberton.h"

/**
 * reverse_array - reverses the content of an aay of integers
 * @a: aay
 * @n: Int
 *
 */

void reverse_array(int *a, int n)
{
int lng;
int tmp = 0;

for (len = 0; lng < --n; lng++)
{
tmp = a[n],
a[n] = a[lng],
a[lng] = tmp;
}
}
