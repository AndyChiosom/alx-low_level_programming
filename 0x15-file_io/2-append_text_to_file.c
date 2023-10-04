#include "main.h"
/**
* append_text_to_file - is to always Appends text at the end.
* @filename: A lead to the file.
* @text_content: about adding a string to the end of the file.
*
* Return: If the function fails return - -1.
*         also return --1If the file does not exist.
*         if not return - 1.
*/
int append_text_to_file(const char *filename, char *text_content)
{
int b, w, len = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (len = 0; text_content[len];)
len++;
}
b = open(filename, O_WRONLY | O_APPEND);
w = write(b, text_content, len);
if (b == -1 || w == -1)
return (-1);
close(b);
return (1);
}
