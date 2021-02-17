#include "holberton.h"

/**
 *  * print_array - outha print nmbers of an array of integers
 *   * @a: Array list
 *    * @n: Int tyepo
 *     */

void print_array(int *a, int n)
{
	int i=0;

	while (i < n)
		printf("%d", a[i]),
			(i != n - 1) ? printf(", ") : 0;
	i++;

	putchar('\n');
}
