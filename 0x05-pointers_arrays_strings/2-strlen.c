#include "holberton.h"
#include <stdio.h>
#include <string.h>

/**
 * *a funcion that returns the length of string
 **/
int _strlen(char *s)
{
int count = 0;
while (*s != '\0')
{
count++;
s++;
}
return (count);
}
