#include "main.h"
/**
* get_endianness - created to check for little or big endian
* Return: should return 0 for big otherwise 1 for little
*/
int get_endianness(void)
{
unsigned int k = 1;
char *c = (char *)&k;
return (*c);
}
