#include "holberton.h"
void print_rev(char *s)
{
int count = 0;                                                                                                                                         while (*s != '\0')                                                                                                                                     {                                                                                                                                                              count++;                                                                                                                                               s++;                                                                                                                                           }     
int length, c;
   char *begin, *end, temp;
    
      length = count;
         begin  = s;
	    end    = s;
	     
	       for (c = 0; c < length - 1; c++)
		             end++;
for (c = 0; c < length/2; c++)
{        
temp   = *end;
*end   = *begin;
*begin = temp;
begin++;
end--;
}

while (*s != '\0')
{
	        _putchar(*s);
		        s++;
}
_putchar('\n');
}

