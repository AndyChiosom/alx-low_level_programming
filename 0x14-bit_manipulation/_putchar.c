#include <unistd.h>
#include "main.h"
/**
* for _putchar: writes the char c to show stdout
* @c: The char in order to print
*
* Return: always 1 if success.
* On error, should returned -1
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
