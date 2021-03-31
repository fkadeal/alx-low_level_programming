#include "holberton.h"
/**
*append_text_to_file- function to append content to given file
*@filename: name of file to get updated/append on
*@text_content: text or char that will append at the end of file
*Return: expected -1 if error occord and 1 if run properly
*/
int append_text_to_file(const char *filename, char *text_content)
{
int fd, opn;
if (filename == NULL)
{
return (-1);
}

opn = open(filename, O_WRONLY | O_APPEND);
if (opn < 0)
{
return (-1);
}

if (text_content == NULL)
{
return (1);
}else{
fd = write(opn, text_content, _strlen(text_content));
if (fd < 0)
{
return (-1);
}
close(opn);
return (1);
}