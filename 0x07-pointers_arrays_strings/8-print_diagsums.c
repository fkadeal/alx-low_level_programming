#include "holberton.h"


/**
 *  * print_diagsums - prints the sum of two diagonals of a square matrix
 *   * @a: the matrix int
 *    * @size: the size of the matrix
 *      * Return: Always 0 (Success)
 *       */

void print_diagsums(int *a, int size)
{
int X, sum1 = 0, sum2 = 0;

for (X = 0; X < size; X++)
{
sum1 += a[(size + 1) * X],
sum2 += a[(size - 1) * (X + 1)];
}
printf("%d, %d\n", sum1, sum2);
}
