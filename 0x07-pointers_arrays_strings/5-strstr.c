#include "holberton.h"
/**
 *_strstr - find the location for substring
 *@haystack: pointer to char
 *@needle: is pointer to char
 *Return: the pointer if not Null
 */

char *_strstr(char *haystack, char *needle)
{
while (*haystack)
{
char *Bng = haystack, *etbaba = needle;
while (*haystack && *etbaba && *haystack == *etbaba)
{
haystack++,
etbaba++;
}
if (!*etbaba)
{
return (Bng);
}
haystack = Bng + 1;
}
return (0);
}
