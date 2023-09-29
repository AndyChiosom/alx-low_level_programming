#include "main.h"
/**
* set_bit - this will sets a bit to 1 at a given index
* @num: direct to the number to be changed
* @index: point to 1 as the index of the bit
*
* Return: always will return 1 for success, otherwise -1
*/
int set_bit(unsigned long int *num, unsigned int index)
{
if (index > 63)
return (-1);
*num = ((1UL << index) | *num);
return (1);
}
