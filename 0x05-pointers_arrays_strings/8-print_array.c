#include "holberton.h"
#include <stdio.h>

/**
 *  * print_array - outha print nmbers of an array of integers
 *   * @a: Array list
 *    * @n: Int tyepo
 */

void print_array(int *a, int n)
{
	int i = 0;

for (; i < n ; i++)
printf("%d ,", a[i]);
	if (i != n - 1)
	{
	printf(", ");
	}
	putchar('\n');
	}
