#include "main.h"
/**
* create_file - to make a file.
* @filename: will point to the created file.
* @text_content: rep a pointer to a string in the file.
*
* Return: return --1.
*         if not - 1.
*/
int create_file(const char *filename, char *text_content)
{
int bk, w, len = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (len = 0; text_content[len];)
len++;
}
bk = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
w = write(bk, text_content, len);
if (bk == -1 || w == -1)
return (-1);
close(bk);
return (1);
}
