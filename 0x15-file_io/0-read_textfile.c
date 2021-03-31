#include "hlberton.h"
/**
**read_textfile- ssize_t - this will read and write to posix
*@filename : the file to be inserted when program run
*@letters : number of chars to be readn and writen
*read_textfile : function that reads file
*Return: actual number of letters it could read and print
**/
ssize_t read_textfile(const char *filename, size_t letters)
{
int file, fd;
char *buffer;
if (filename == NULL)
{
return (0);
}
buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
{
return (0);
}
file = open(filename, O_RDONLY);
if (file < 0)
{
free(buffer);
return (0);
}
fd = read(file, buffer, letters);
write(STDOUT_FILENO, buffer, fd);
close(file);
return (fd);
}
