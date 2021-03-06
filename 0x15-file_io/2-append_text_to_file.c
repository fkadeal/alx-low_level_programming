#include "holberton.h"
/**
*append_text_to_file- function to append content to given file
*@filename: name of file to get updated/append on
*@text_content: text or char that will append at the end of file
*Return: expected -1 if error occord and 1 if run properly
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd = open(filename, O_APPEND | O_WRONLY), count = 0;

	if (!filename || fd == -1)
		return (-1);
	while (text_content && text_content[count])
		count++;
	if (!count)
		return (1);
	if (write(fd, text_content, count) == -1)
		return (-1);
	close(fd);
	return (1);
}
