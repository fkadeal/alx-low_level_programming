#include "holberton.h"
/**
 *binary_to_uint - this function that convert to binary
 *@b: pointer to unsignid int
 *Return: returns converted unsignid int
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0, i = 0;
if (!b)
	return (0);
while (b[i])
{
	if (!(b[i] == '0' || b[i] == '1'))
	return (0);
	result <<= 1;
	if (b[i] == '1')
	result += 1;

	i++;
	}
return (result);
}
