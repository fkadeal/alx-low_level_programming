#include <stdio.h>
int main(void)
{
puts("Size of a char: %lu byte(s)\n", sizeof(char));
puts("Size of an int: %lu byte(s)\n", sizeof(int));
puts("Size of a long int: %lu byte(s)\n", sizeof(long int));
puts("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
puts("Size of a float: %lu byte(s)\n", sizeof(float));
return (0);
}
