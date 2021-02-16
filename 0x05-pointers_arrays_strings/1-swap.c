#include "holberton.h"
/**
 *a function that swap given int value
 *by etbaba
 **/
void swap_int(int *a, int *b)
/*swap_int : function to swap values of 'a' and 'b' */
{
int swap;
swap = *a;
*a = *b;
*b = swap;
}
