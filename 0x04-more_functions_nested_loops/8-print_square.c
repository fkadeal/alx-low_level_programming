#include "holberton.h"

/**
 * a function that prints a square, followed by a new line.
 * Return: no return
 */
void print_square(int size)
{
int i;
int j;
if (size > 0)
  {
  for (i = 0; i < size; i++)
    {
      for (j = 0; j < size; j++)
        {
         _putchar('#');
        }
      _putchar('\n');
      }
    }
  else if (size <= 0)
  {
    _putchar('\n');
  }
}
